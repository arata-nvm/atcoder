#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, k, h, c = 0;
  cin >> n >> k;
  REP(i, n) {
    cin >> h;
    if (h >= k) c++;
  }
  cout << c << endl;
  return 0;
}