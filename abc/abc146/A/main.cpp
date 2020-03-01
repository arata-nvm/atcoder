#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  static map<string, int> m;
  m["SUN"] = 7;
  m["MON"] = 6;
  m["TUE"] = 5;
  m["WED"] = 4;
  m["THU"] = 3;
  m["FRI"] = 2;
  m["SAT"] = 1;

  string s;
  cin >> s;
  cout << m[s] << endl;
  return 0;
}