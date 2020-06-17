#include<bits/stdc++.h>
typedef long long int ll;
#define REP(i,n) for(ll i = 0; i < (n); ++i)
using namespace std;
const ll MOD = 1000000007;

ll fact(ll n) {
  ll res = 1;
  for (ll i = 2; i <= n; i++)
      res = res * i;
  return res;
}

ll ncr[1000000];
ll c[1000000];

ll nCr(ll n, ll r){
  if (ncr[n] != 0) return ncr[n];
  ncr[n] = fact(n) / (fact(r) * fact(n - r));
  return ncr[n];
}

int main() {
  ll n, mn = -1;
  cin >> n;
  ll a[n];
  REP(i, n) {
    cin >> a[i];
    mn = max(a[i], mn);
    c[a[i]]++;
  }

  ll cs = 0;
  REP(i, mn + 1) {
    cs += nCr(c[i], 2);
  }

  REP(k, n) {
    cout << cs - nCr(c[a[k]], 2) + nCr(c[a[k]] - 1, 2) << endl;
  }
  return 0;
}