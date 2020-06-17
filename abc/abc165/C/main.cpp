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

ll n, m, q, ms = 0;
ll a[51][4];

ll check(vector<ll> c) {
  ll s = 0;
  REP(i, q) {
    if (c[a[i][1] - 1] - c[a[i][0] - 1] == a[i][2]) s += a[i][3];
  }
  return s;
}

void f(vector<ll> c) {
  if (c.size() == n) {
    ms = max(check(c), ms);
  } else {
    ll s = (c.size() != 0 ? c[c.size() - 1] : 1);
    FOR(i, s, m + 1) {
      c.push_back(i);
      f(c);
      c.pop_back();
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> m >> q;
  REP(i, q) cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];

  vector<ll> c;
  f(c);

  cout << ms << endl;
  return 0;
}