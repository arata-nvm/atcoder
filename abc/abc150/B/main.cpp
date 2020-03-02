#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, c = 0;
  string s;
  cin >> n >> s;
  REP(i, n - 2) {
    if (s[i] == 'A'
      && s[i + 1] == 'B'
      && s[i + 2] == 'C') {
        c ++;
      }
  }
  cout << c << endl;
  return 0;
}