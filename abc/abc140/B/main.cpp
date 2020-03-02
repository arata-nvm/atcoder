#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, sum = 0;
  cin >> n;
  int a[n], b[n], c[n];
  REP(i, n) cin >> a[i];
  REP(i, n) cin >> b[i];
  REP(i, n - 1) cin >> c[i];

  REP(i, n) {
    sum += b[a[i] - 1];
    if (i != 0 && a[i] - a[i - 1] == 1)
      sum += c[a[i - 1] - 1];
  }

  cout << sum << endl;
  return 0;
}