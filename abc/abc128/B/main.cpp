#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int p;
  string s;
  map<string, map<int, int, greater<int>>> m;
  for (int i = 0; i < n; i++) {
    cin >> s >> p;
    m[s][p] = i + 1;
  }

  for (auto i = m.begin(); i != m.end(); i++) {
    for (auto j = i->second.begin(); j != i->second.end(); j++) {
      cout << j->second << endl;
    }
  }

  return 0;
}
