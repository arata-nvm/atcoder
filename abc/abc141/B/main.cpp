#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  string s;
  cin >> s;
  REP(i, s.length()) {
    if (s[i] == 'U' || s[i] == 'D') continue;
    if ((i + 1) % 2 == 0) {
      if (s[i] != 'L') {
        cout << "No" << endl;
        return 0;
      }
    } else {
      if (s[i] != 'R') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}