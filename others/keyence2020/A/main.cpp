#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  cout << n / max(h, w) + (n % max(h, w) != 0) << endl;
  return 0;
}