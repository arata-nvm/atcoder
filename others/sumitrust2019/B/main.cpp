#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  int x = (int)(n / 1.08);

  for (int i = -1; i <= 1; ++i) {
    if ((int)((x + i) * 1.08) == n) {
      cout << x + i;
      return 0;
    }
  }
  cout << ":(" << endl;
  return 0;
}