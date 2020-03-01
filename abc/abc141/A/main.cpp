#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  static map<string, string> m;
  m["Sunny"] = "Cloudy";
  m["Cloudy"] = "Rainy";
  m["Rainy"] = "Sunny";

  string s;
  cin >> s;
  cout << m[s] << endl;
  return 0;
}