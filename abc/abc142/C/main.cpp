#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, a;
  map<int, int> m;
  cin >> n;
  REP(i, n) {
    cin >> a;
    m[a] = i + 1;
  }

  for (auto i = m.begin(); i != m.end(); ++i) {
    if (i != m.begin()) cout << " ";
    cout << i->second;
  }
  cout << endl;
  return 0;
}