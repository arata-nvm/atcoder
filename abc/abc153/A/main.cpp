#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int h, a, c = 0;
  cin >> h >> a;
  while (h > 0) {
    h -= a;
    c++;
  }
  cout << c << endl;
  return 0;
}