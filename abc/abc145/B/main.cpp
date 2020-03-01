#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (n == 1 || n % 2 == 1) {
    cout << "No" << endl;
    return 0;
  }

  REP(i, n / 2) {
    if (s[i] != s[i + n / 2]) {
    cout << "No" << endl;
    return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}