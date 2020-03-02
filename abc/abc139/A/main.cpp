#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  string s, t;
  cin >> s >> t;
  cout << (s[0] == t[0]) + (s[1] == t[1]) + (s[2] == t[2]) << endl;
  return 0;
}