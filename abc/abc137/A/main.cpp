#include <iostream>
using namespace std;
int main() {
    int a, b;
    int add, sub, mul;
    cin >> a >> b;
    add = a + b;
    sub = a - b;
    mul = a * b;
    cout << max(max(add, sub), mul) << endl;
    return 0;
}