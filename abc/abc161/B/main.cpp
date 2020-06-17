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

ll a[2000];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

    ll n, m, sum = 0, c = 0;
    cin >> n >> m;
    REP(i, n) {
        cin >> a[i];
        sum += a[i];
    }

    REP(i, n) {
        if (a[i] >= sum / (4 * m)) {
            c++;
        }
    }

    Yn(c >= m);

  return 0;
}
