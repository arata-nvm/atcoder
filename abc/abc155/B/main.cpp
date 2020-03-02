#include <iostream>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 != 0) continue;
        if (a % 3 == 0 || a % 5 == 0) continue;
        cout << "DENIED" << endl;
        return 0;
    }
    cout << "APPROVED" << endl;
    return 0;
}