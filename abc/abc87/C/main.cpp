#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, cx = 0, cy = 0, sum = 0, max = -1;
  cin >> n;
  int a[n][2];
  for (int j = 0; j < 2; j++)
    for (int i = 0; i < n; i++)
      cin >> a[i][j];

  for (int i = 0; i < n; i++) {
    sum = 0;
    for (int j = 0; j <= i; j++) {
      sum += a[j][0];
    }
    for (int j = i; j < n; j++) {
      sum += a[j][1];
    }
    if (sum > max) max = sum;
  }

  cout << max << endl;
  return 0;
}