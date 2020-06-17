#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  string s, sf, sb;
  int q, t, f;
  char c;

  bool state = true;
  cin >> s >> q;

  REP(i, q) {
    scanf("%d", &t);
    if (t == 1) {
      state = !state;
    } else {
      scanf("%d %c", &f, &c);
      if (f == 1) {
        if (state) {
          sf += c;
        } else {
          sb += c;
        }
      } else {
        if (state) {
          sb += c;
        } else {
          sf += c;
        }
      }
    }
  }

  reverse(sf.begin(), sf.end());
  sf += s;
  sf += sb;
  if (!state) {
    reverse(sf.begin(), sf.end());
  }
  cout << sf << endl;
  return 0;
}