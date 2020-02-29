#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, a;
  set<int> s;
  cin >> n;
  REP(i, n) {
    cin >> a;
    if (s.find(a) != s.end()) {
      cout << "NO" << endl;
      return 0;
    }
    s.insert(a);
  }
  cout << "YES" << endl;
  return 0;
}