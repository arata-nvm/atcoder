#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, r = 0;
  cin >> n;

  r += 100 * (n / 10);
  n %= 10;

  if (n >= 7) r += 100;
  else r += 15 * n;

  cout << r;
  return 0;
}