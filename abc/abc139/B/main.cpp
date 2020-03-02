#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int a, b, o = 1, c = 0;
  cin >> a >> b;
  while (o < b) {
    o += a - 1;
    c++;
  }
  cout << c << endl;
  return 0;
}
