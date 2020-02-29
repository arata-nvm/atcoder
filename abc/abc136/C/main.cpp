#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int h, max = -1;
  for (int i = 0; i < n; i++) {
    cin >> h;
    if (h > max) max = h;
    if (h < max - 1) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}