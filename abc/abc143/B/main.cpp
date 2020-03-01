#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, sum = 0;
  cin >> n;
  int d[n];
  REP(i, n) cin >> d[i];
  REP(i, n - 1) for (int j = i + 1; j < n; ++j) {
    sum += d[i] * d[j];
  }
  cout << sum << endl;
  return 0;
}