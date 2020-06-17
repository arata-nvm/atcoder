#include<bits/stdc++.h>

using namespace std;
using ll = long long int;
using ull = unsigned long long int;
#define vll vector<ll>

#define FOR(i, b, e) for(ll i = (b); i < (e); ++i)
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

map< ll, ll > prime_factor(ll n) {
  map< ll, ll > ret;
  for(ll i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}

ll f(ll n) {
  ll i = 1, c = 0;
  while((n -= i) >= 0) {
    c++;
    i++;
  }
  return c;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, c = 0;
  cin >> n;

  map<ll, ll> factors = prime_factor(n);
  for (auto it = factors.begin(); it != factors.end(); it++) {
    c += f(it->second);
  }

  cout << c << endl;

  return 0;
}