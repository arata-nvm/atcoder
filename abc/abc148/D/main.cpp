#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, a, ca = 1, c = 0;
  cin >> n;
  REP(i, n) {
    cin >> a;
    if (a != ca) {
      c++;
      continue;
    }
    ca++;
  }
  if (c == n) c = -1;
  cout << c << endl;
  return 0;
}