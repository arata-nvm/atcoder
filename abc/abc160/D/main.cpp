#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  ll n, x, y, r;
  cin >> n >> x >> y;
  for (int i = 1; i < n; ++i) {
    r = n - i;
    cout << r << endl;
  }
  return 0;
}
