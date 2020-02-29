#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  while (n > 0) {
    n -= a;
    if (n <= 0) {
      cout << "Ant" << endl;
      break;
    }

    n -= b;
    if (n <= 0) {
      cout << "Bug" << endl;
      break;
    }
  }
  return 0;
}