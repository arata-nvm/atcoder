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

  long double a, b, h, m;
  cin >> a >> b >> h >> m;

  h += m / 60;

  long double r1 = 30 * h * M_PI / 180, r2 = 6 * m * M_PI / 180;
  long double x1 = cos(r1) * a, y1 = sin(r1) * a;
  long double x2 = cos(r2) * b, y2 = sin(r2) * b;
  cout << fixed << setprecision(10);
  cout << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;

  return 0;
}