#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

bool isBatch(string s) {
  REP(i, s.length() / 2) {
    if (s[i] != s[s.length() - i - 1]) return false;
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  if (isBatch(s)
  && isBatch(s.substr(0, (s.length() - 1) / 2))
  && isBatch(s.substr((s.length() + 3) / 2 - 1, s.length() - (s.length() + 3) / 2 + 1))) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}