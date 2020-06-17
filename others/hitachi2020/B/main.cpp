#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int A, B, M;
  cin >> A >> B >> M;
  int a[A], b[B], x, y, c, sum, min, mina = INT_MAX, minb = INT_MAX;
  REP(i, A) {
    cin >> a[i];
    if (a[i] < mina) mina = a[i];
  }
  REP(i, B) {
    cin >> b[i];
    if (b[i] < minb) minb = b[i];
  }

  sum = mina + minb;
  min = sum;

  REP(i, M) {
    cin >> x >> y >> c;
    sum = a[x - 1] + b[y - 1] - c;
    if (sum < min) min = sum;
  }

  cout << min << endl;

  return 0;
}