#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n;
  string s;
  cin >> n >> s;

  REP(i, s.length()) s[i] = (char)('A' + (s[i] - 'A' + n) % ('Z' - 'A' + 1));
  cout << s << endl;

  return 0;
}