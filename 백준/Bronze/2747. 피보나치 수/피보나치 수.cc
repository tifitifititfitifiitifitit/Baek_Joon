#include<iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c = a + b;
    cin >> n;

    if (n == 0) cout << "0";
    else {
        for (int i = 2; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
        }
        cout << c;
    }

    return 0;
}