#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  if (a1 + a2 + a3 >= 22) {
    cout << "bust" << endl;
  } else {
    cout << "win" << endl;
  }
  return 0;
}