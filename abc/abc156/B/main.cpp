#include <iostream>

using namespace std;

int main() {
  int n, k, c = 1;
  cin >> n >> k;
  while (n > 1) {
    n /= k;
    c ++;
  }
  if (n == 0) c--;
  cout << c << endl;
  return 0;
}