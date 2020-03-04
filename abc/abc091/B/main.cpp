#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string s;
  map<string, int> c;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    c[s] += 1;
  }

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    c[s] -= 1;
  }

  int max = -1;
  for (auto p = c.begin(); p != c.end(); p++) {
    if (p->second > max) max = p->second;
  }

  cout << (max < 0 ? 0 : max) << endl;
  return 0;
}