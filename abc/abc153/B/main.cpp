#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int h, n, a, asum = 0;
  cin >> h >> n;
  REP(i, n) {
    cin >> a;
    asum += a;
  }
  if (h > asum) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}