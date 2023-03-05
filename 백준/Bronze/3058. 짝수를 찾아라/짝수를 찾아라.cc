#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, sum = 0, min = 100;
        for (int j = 0; j < 7; j++) {
            cin >> n;
            if (n % 2 == 0) {
                sum += n;
                if (n < min) min = n;
            }
        }
        cout << sum << " " << min << endl;
    }
}