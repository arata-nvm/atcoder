#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, m, s, c;
  int r[3] = {-1, -1, -1}, t;
  cin >> n >> m;
  REP(i, m) {
    cin >> s >> c;
    if (r[s - 1] != -1 && r[s - 1] != c) {
      cout << -1 << endl;
      return 0;
    }
    r[s - 1] = c;
  }
  REP(a, 10) {
    if (r[0] != -1) a = r[0];
    REP(b, 10) {
      if (r[1] != -1) b = r[1];
      REP(c, 10) {
        if (r[2] != -1) c = r[2];

        if (n == 1) {
          t = a;
        } else if (n == 2) {
          t = 10 * a + b;
        } else {
          t = 100 * a + 10 * b + c;
        }
        if (n == 1 || t >= (int)pow(10, n - 1)) {
          cout << t << endl;
          return 0;
        }

        if (r[2] != -1) break;
      }
      if (r[1] != -1) break;
    }
    if (r[0] != -1) break;
  }

  cout << -1 << endl;
  return 0;
}