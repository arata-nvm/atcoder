#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, max = -1;
    string s;
    map<string, int> m;
    cin >> n;
    for(int i = 0; i < n; i++) {
          cin >> s;
          if (m.find(s) == m.end()) {
              m[s] = 0;
          }
          if (++m[s] > max) max = m[s];
    }
    for (auto i = m.begin(); i != m.end(); i++) {
        if (i->second == max) {
            cout << i->first << endl;
        }
    }
    return 0;
}