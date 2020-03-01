#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int h[3][3], n, b;
  bool a[100] = {};
  REP(i, 3) REP(j, 3) {
    cin >> h[j][i];
  }

  cin >> n;
  REP(i, n) {
    cin >> b;
    a[b] = true;
  }
  if (a[h[0][0]] && a[h[0][1]] && a[h[0][2]]
    || a[h[1][0]] && a[h[1][1]] && a[h[1][2]]
    || a[h[2][0]] && a[h[2][1]] && a[h[2][2]]
    || a[h[0][0]] && a[h[1][0]] && a[h[2][0]]
    || a[h[0][1]] && a[h[1][1]] && a[h[2][1]]
    || a[h[0][2]] && a[h[1][2]] && a[h[2][2]]
    || a[h[0][0]] && a[h[1][1]] && a[h[2][2]]
    || a[h[2][0]] && a[h[1][1]] && a[h[0][2]]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  return 0;
}