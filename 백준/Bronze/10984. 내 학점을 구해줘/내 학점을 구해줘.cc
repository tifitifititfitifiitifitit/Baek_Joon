#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, sum = 0;
        cin >> n;

        double avg = 0;

        for (int j = 0; j < n; j++) {
            int a;
            double b;

            cin >> a >> b;
            sum += a;
            avg += a * b;
        }

        cout << fixed;
        cout.precision(1);
        cout << sum << " " << avg / sum << endl;
    }
}