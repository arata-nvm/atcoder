#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int n;
  float v, cv = 0;
  vector<float> values;
  cin >> n;
  REP(i, n) {
    cin >> v;
    values.push_back(v);
  }
  sort(values.begin(), values.end());
  cv = values[0];
  for (int i = 1; i < n; i++) {
    cv = (cv + values[i]) / 2.0;
  }

  cout << cv << endl;
  return 0;
}