#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, m, c = 0;
  cin >> n >> m;
  REP(i, n - 1) c += i + 1;
  REP(i, m - 1) c += i + 1;
  cout << c << endl;
  return 0;
}