#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int k, x;
  cin >> k >> x;
  int begin = max(x - k + 1, -1000000);
  int end = min(x + k - 1, 1000000);

  for (int i = begin; i <= end; i++) {
    if (i != begin) cout << " ";
    cout << i;
  }
  cout << endl;
  return 0;
}