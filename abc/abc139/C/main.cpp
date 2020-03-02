#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, h, oh, c = 0, maxc = 0;
  cin >> n >> h;

  REP(i, n - 1) {
    oh = h;
    cin >> h;
    if (oh >= h) {
      c++;
    } else {
      if (c > maxc) maxc = c;
      c = 0;
    }
  }
  if (c > maxc) maxc = c;

  cout << maxc << endl;
  return 0;
}