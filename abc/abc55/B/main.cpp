#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll m = 1000000007;

int main() {
  ll n, p = 1;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    p = (p * i) % m;
  }
  cout << p << endl;
  return 0;
}