#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int a, b, ans;
  cin >> a >> b;

  if (a > b) {
    int tmp = a;
    a = b;
    b = tmp;
  }

  if (a == 1 && b == 2) ans = 3;
  if (a == 1 && b == 3) ans = 2;
  if (a == 2 && b == 3) ans = 1;

  cout << ans << endl;

  return 0;
}