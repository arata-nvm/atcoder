#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

ll c[1000000];
ll ncr[1000000];

ll C(ll n) {
  if (ncr[n] != 0) return ncr[n];
  ll r = 0;
  REP(i, n - 1) r += i + 1;
  ncr[n] = r;
  return ncr[n];
}

int main() {
  ll n, ma = -1, sum = 0;
  cin >> n;
  ll a[n];
  REP(i, n) {
    cin >> a[i];
    ma = max(a[i], ma);
    c[a[i]]++;
  }

  REP(i, ma + 1) {
    sum += C(c[i]);
  }

  REP(k, n) {
    cout << sum - C(c[a[k]]) + C(c[a[k]] - 1) << endl;
  }
  return 0;
}