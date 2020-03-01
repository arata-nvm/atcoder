#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

ll gcd(ll a, ll b) {
  return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b) {
  return a / gcd(a, b) * b;
}

int main() {
  ll a, b;
  cin >> a >> b;
  cout << lcm(a, b) << endl;
  return 0;
}