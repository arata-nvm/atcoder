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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, r = 0, g = 0, b = 0, c;
  string s;
  cin >> n >> s;
  REP(i, n) {
    if (s[i] == 'R') r++;
    else if (s[i] == 'G') g++;
    else  b++;
  }

  c = r * g * b;

  REP(i, n) FOR(j, i + 1, n) {
    ll k = 2 * j - i;
    if (k >= n || s[i] == s[j] || s[i] == s[k] || s[j] == s[k]) continue;
    c--;
  }

  OUT(c);

  return 0;
}