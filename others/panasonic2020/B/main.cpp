#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  ll h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) {
    cout << 1 << endl;
    return 0;
  }
  cout << (h * w + 1) / 2 << endl;
  return 0;
}