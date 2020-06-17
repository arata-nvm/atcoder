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

  int x, n, p;
  cin >> x >> n;

  set<ll> v;
  REP(i, n) {
    cin >> p;
    v.insert(p);
  }

  int mx = 1000, xx = 1;

  FOR(i, 0, 102) {
    if (v.find(i) == v.end() && abs(x - i) < mx) {
      mx = min(abs(x - i), mx);
      xx = i;
    }
  }

  cout << xx << endl;

  return 0;
}