#include<bits/stdc++.h>

using namespace std;

int main() {
  static int wa[100001];
  static bool ac[100001];

  int n, m;
  cin >> n >> m;

  int p, a = 0, w = 0;
  string s;
  for (int i = 0; i < m; i++) {
    cin >> p >> s;
    if (ac[p]) continue;
    if (s == "WA") wa[p]++;
    else {
      ac[p] = true;
      a++;
      w+=wa[p];
    }
  }

  cout << a << " " << w << endl;
}
