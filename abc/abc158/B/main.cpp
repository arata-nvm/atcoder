#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  ll n, a, b, r;
  cin >> n >> a >> b;
  r = (n / (a + b)) * a;
  r += min(n % (a + b), a);
  cout << r << endl;
  return 0;
}