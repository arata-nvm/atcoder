#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int a, b;
  cin >> a >> b;
  if (a >= 10 || b >= 10) cout << -1 << endl;
  else cout << a * b << endl;
  return 0;
}