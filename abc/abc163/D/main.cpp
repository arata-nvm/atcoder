#include<bits/stdc++.h>

using namespace std;
using ll = long long int;
#define vll vector<ll>

#define FOR(i, b, e) for(int i = (b); i < (e); ++i)
#define REP(i, e) FOR(i, 0, e)
#define SORT(v) sort((v).begin(), (v).end())
#define RSORT(v) sort((v).rbegin(), (v).rend())
#define REV(v) reverse((v).begin(), (v).end())
#define IN(v) cin >> (v);
#define VIN(v, n) REP(i, n) cin >> v[i];
#define OUT(v) cout << (v) << endl;
#define YN(b) OUT((b) ? "YES" : "NO")
#define Yn(b) OUT((b) ? "Yes" : "No")
#define yn(b) OUT((b) ? "yes" : "no")

const ll MOD = 1000000007;

ll combination(ll n, ll r) {
  if ( r * 2 > n ) r = n - r;
  ll dividend = 1;
  ll divisor  = 1;
  for (ll i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, k, s = 0;
  cin >> n >> k;

  if (k == n + 1) {
    cout << 1 << endl;
    return 0;
  }

  FOR(i, k, n + 1) {
    s += combination(n + 1, i);
    s %= MOD;
  }
  cout << s << endl;

  return 0;
}
// 3 2
// 0 1 2 3
