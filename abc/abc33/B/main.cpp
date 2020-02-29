#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, p, sum = 0, max = -1;
  string s, name = "";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> p;
    if (p > max) {
      max = p;
      name = s;
    }
    sum += p;
  }
  if (max * 2 > sum) {
    cout << name << endl;
  } else {
    cout << "atcoder" << endl;
  }
  return 0;
}