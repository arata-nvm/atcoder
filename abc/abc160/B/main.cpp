#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  ll x;
  cin >> x;
  cout << (x / 500 * 1000) + (x % 500 / 5 * 5) << endl;
  return 0;
}