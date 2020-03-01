#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  string s;
  cin >> s;
  int c = 0, len = s.length();
  REP(i, len / 2) {
    if (s[i] != s[len - i - 1]) c++;
  }
  cout << c << endl;
  return 0;
}