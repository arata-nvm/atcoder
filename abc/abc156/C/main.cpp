#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n], maxX = -1;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    if (x[i] > maxX) maxX = x[i];
  }

  int sum, minSum = INT_MAX;
  for (int i = 1; i <= maxX; i++) {
    sum = 0;
    for (int j = 0; j < n; j++) {
      sum += (x[j] - i) * (x[j] - i);
    }
    if (sum < minSum) minSum = sum;
  }
  cout << minSum << endl;

  return 0;
}