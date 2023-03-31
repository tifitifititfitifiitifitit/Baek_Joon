#include <iostream>
using namespace std;

void print(int i, int j, int n) {
    if (n == 1) cout << "*";

    else if ((i / (n / 3)) % 3 == 1 && (j / (n / 3)) % 3 == 1) {
        cout << " ";
    }

    else print(i, j, n / 3);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            print(i, j, n);
        }
        cout << endl;
    }
}