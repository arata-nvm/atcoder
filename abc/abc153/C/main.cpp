#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n, k, h;
  ll hsum = 0;
  vector<int> v;
  cin >> n >> k;
  if (n <= k) {
    cout << 0 << endl;
    return 0;
  }

  REP(i, n) {
    cin >> h;
    v.push_back(h);
  }

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for(int i = k; i < (n); ++i) {
    hsum += v[i];
  }

  cout << hsum << endl;
  return 0;
}