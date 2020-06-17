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

  ll a = 0, b = 0, ap, bp, x;
  cin >> x;

  while (true) {
    ap = pow(a, 5);
    bp = pow(b, 5);
    if (ap - bp == x) break;
    if (bp - ap == x) {
      a *= -1;
      b *= -1;
      break;
    }

    if (ap - x > bp) {
      // a++ / b--
      if (abs(pow(a + 1, 5) - x - bp) > abs(ap - x - pow(b - 1, 5))) b--;
      else a++;
    } else if (ap - x < bp) {
      // a-- / b++
      if (abs(pow(a - 1, 5) - x - bp) > abs(ap - x - pow(b + 1, 5))) b++;
      else a--;
    }
  }

  cout << a << " " << b << endl;

  return 0;
}