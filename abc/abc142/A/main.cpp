#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, o;
  cin >> n;
  o = n / 2 + (n % 2 != 0);
  cout << o / (float)n << endl;
  return 0;
}