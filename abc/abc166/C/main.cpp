#include<bits/stdc++.h>

using namespace std;
using ll = long long int;
using ull = unsigned long long int;
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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, m, a, b;
  cin >> n >> m;
  ll h[n], hh[n];
  REP(i, n) {
    cin >> h[i];
    hh[i] = -1;
  }
  REP(i, m) {
    cin >> a >> b;
    a--;
    b--;
    hh[a] = max(hh[a], h[b]);
    hh[b] = max(hh[b], h[a]);
  }

  ll c = 0;
  REP(i, n) {
    if (h[i] > hh[i] || hh[i] == -1) c++;
  }

  cout << c << endl;

  return 0;
}