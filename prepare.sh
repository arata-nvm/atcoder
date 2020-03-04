#!/usr/bin/env bash

fetch() {
  local kind="$1"
  local contestName="$2"

  # コンテストのディレクトリを作成
  cd $kind
  mkdir -p $contestName
  cd $contestName

  # それぞれの問題データを取得する
  for x in {A..D}
  do
    mkdir -p $x
    cd $x
    echo "==> fetch ${contestName}_${x,}"
    oj d "https://atcoder.jp/contests/${contestName}/tasks/${contestName}_${x,}" 1> /dev/null 2> /dev/null
    cp ../../../template.cpp main.cpp
    cd ..
  done
  echo "==> fetch ${contestName}_${x,}"
}

fetchRegularContest() {
  echo -n "num: "
  read num

  # バリデーション
  expr "$num" + 1 >& /dev/null
  if [ $? -ge 2 ]; then
    break
  fi

  # 0埋め
  num=`printf %03d $num`

  fetch "$kind" "$kind$num"
}

fetchOtherContest() {
  echo -n "name: "
  read name

  fetch "others" "$name"
}

touch template.cpp
mkdir -p abc arc agc others
select kind in abc arc agc other;
do
  if [ "$kind" == "" ]; then
    break
  fi

  if [ "$kind" == "other" ]; then
    fetchOtherContest
    break
  fi

  fetchRegularContest
  break
done
