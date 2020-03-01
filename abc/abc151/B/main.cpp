#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, k, m, a, asum = 0;
  cin >> n >> k >> m;
  REP(i, n - 1) {
    cin >> a;
    asum += a;
  }

  if (asum + k < m * n) {
    cout << -1 << endl;
    return 0;
  }

  cout << max(0, m * n - asum) << endl;
  return 0;
}