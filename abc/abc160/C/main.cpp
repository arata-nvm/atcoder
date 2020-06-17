#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  ll k, n, a;
  cin >> k >> n;
  vector<ll> v;
  REP(i, n) {
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());

  ll d = v[v.size() - 1] - v[0], md = d;
  REP(i, n - 1) {
    if (i == 0) {
      d = d - (v[i + 1] - v[i]) + (k + v[i] - v[(i + n - 1) % n]);
    } else {
      d = d - (v[i + 1] - v[i]) + (v[i] - v[(i + n - 1) % n]);
    }
    md = min(d, md);
  }

  cout << md << endl;

  return 0;
}
// (5, 10), (5,)
// (5, 5), (10, 5)