#include<bits/stdc++.h>

using namespace std;
using ll = long long int;
#define vll vector<ll>

#define FOR(i, b, e) for(int i = (b); i < (e); ++i)
#define REP(i, e) FOR(i, 0, e)
#define SORT(v) sort((v).begin(), (v).end())
#define RSORT(v) sort((v).rbegin(), (v).rend())
#define OUT(v) cout << (v) << endl;
#define YN(b) OUT((b) ? "YES" : "NO")
#define Yn(b) OUT((b) ? "Yes" : "No")
#define yn(b) OUT((b) ? "yes" : "no")

const ll MOD = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  while (true) {
    c -= b;
    if (c <= 0) {
      cout << "Yes" << endl;
      return 0;
    }
    a -= d;
    if (a <= 0) {
      cout << "No" << endl;
      return 0;
    }
  }

  return 0;
}