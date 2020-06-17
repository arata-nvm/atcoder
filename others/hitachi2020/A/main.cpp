#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  string s;
  int i = 0;
  cin >> s;
  if (s.length() % 2 != 0) {
    cout << "No" << endl;
    return 0;
  }

  while (i < s.length()) {
    if (s[i] != 'h' || s[i + 1] != 'i') {
      cout << "No" << endl;
      return 0;
    }
    i += 2;
  }
  cout << "Yes" << endl;
  return 0;
}