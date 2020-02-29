#include<bits/stdc++.h>

using namespace std;

int main() {
  string n;
  int a, b, c, d;
  cin >> n;
  a = n[0] - '0';
  b = n[1] - '0';
  c = n[2] - '0';
  d = n[3] - '0';

  for (int bs = -1; bs <= 1; bs+=2) {
    for (int cs = -1; cs <= 1; cs+=2) {
      for (int ds = -1; ds <= 1; ds+=2) {
        if (a + b * bs + c * cs + d * ds == 7) {
          cout << a;
          cout.setf(std::ios::showpos);
          cout << b * bs << c * cs << d * ds << "=7" << endl;
          return 0;
        }
      }
    }
  }
  return 0;
}