#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  char c;
  int n, r = 1;
  string s;
  cin >> n >> s;
  if (n == 1) {
    cout << r << endl;
    return 0;
  }

  c = s[0];
  for (int i = 1; i < n; ++i) {
    if (s[i] != c) {
      c = s[i];
      r++;
    }
  }
  cout << r << endl;
  return 0;
}