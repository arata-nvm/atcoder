#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;
  REP(i, n) {
    cout << s[i] << t[i];
  }
  cout << endl;
  return 0;
}