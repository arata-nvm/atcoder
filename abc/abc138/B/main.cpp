#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n;
  double a, f = 0;
  cin >> n;
  REP(i, n) {
    cin >> a;
    f += 1 / a;
  }
  cout << fixed << 1 / f << endl;
  return 0;
}