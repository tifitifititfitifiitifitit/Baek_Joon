#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;

        int cnt = 0;

        for (int j = 0; j < a.length(); j++) {
            if (a[j] != b[j]) cnt++;
        }

        cout << "Hamming distance is " << cnt << ".\n";
    }
}