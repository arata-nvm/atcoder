#include<bits/stdc++.h>

using namespace std;
using ll = long long int;
#define vll vector<ll>

#define FOR(i, b, e) for(int i = (b); i < (e); ++i)
#define REP(i, e) FOR(i, 0, e)
#define SORT(v) sort((v).begin(), (v).end())
#define RSORT(v) sort((v).rbegin(), (v).rend())
#define OUT(v) cout << (v) << endl;
#define YN(b) OUT((b) ? "YES" : "NO")
#define Yn(b) OUT((b) ? "Yes" : "No")
#define yn(b) OUT((b) ? "yes" : "no")

const ll MOD = 1000000007;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll k, x;
    cin >> k;
    queue<ll> q;
    FOR(i, 1, 10) q.push(i);
    REP(i, k - 1) {
        x = q.front();
        q.pop();
        if (x % 10 != 0) q.push(10 * x + (x % 10) - 1);
        q.push(10 * x + (x % 10));
        if (x % 10 != 9) q.push(10 * x + (x % 10) + 1);
    }
    cout << q.front() << endl;
    return 0;
}