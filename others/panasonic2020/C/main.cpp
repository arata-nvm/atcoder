#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll d = c - a - b;
  if (d > 0 && d * d > 4 * a * b) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}