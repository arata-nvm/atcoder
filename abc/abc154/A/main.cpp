#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  string s, t, u;
  int a, b;
  cin >> s >> t >> a >> b >> u;
  if (s == u) {
    cout << a - 1 << " " << b << endl;
  } else {
    cout << a << " " << b - 1 << endl;
  }
  return 0;
}