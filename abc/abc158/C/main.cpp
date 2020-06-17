#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  float a, b;
  cin >> a >> b;
  int v = (int)max(a / 0.08, b / 0.1) + 1;

  if (floor(v * 0.08) != a || floor(v * 0.1) != b) {
    cout << -1 << endl;
    return 0;
  }

  while (true) {
    if (floor((v - 1) * 0.08) == a && floor((v - 1) * 0.1) == b) {
      v--;
    } else {
      cout << v << endl;
      return 0;
    }
  }

  cout << endl;
  return 0;
}