#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    int train;
    cin >> n >> a >> b;
    train = n * a;
    cout << min(train, b);
    return 0;
}