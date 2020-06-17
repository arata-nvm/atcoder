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

ll gcd(ll a, ll b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll k, sum = 0;
  cin >> k;
  FOR(a, 1, k + 1) FOR(b, 1, k + 1) FOR(c, 1, k + 1) {
    sum += gcd(gcd(a, b), c);
  }
  OUT(sum);

  return 0;
}