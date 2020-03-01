#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, k, q, a;
  cin >> n >> k >> q;
  int s[n];
  REP(i, n) s[i] = 0;

  REP(i, q) {
    cin >> a;
    s[a - 1]++;
  }

  REP(i, n) {
    if (s[i] + k - q > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}