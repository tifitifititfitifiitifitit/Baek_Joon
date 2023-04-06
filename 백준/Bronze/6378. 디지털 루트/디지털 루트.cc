#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1) {
        string n;
        cin >> n;

        if (n == "0") break;

        while (n.length() != 1) {
            int tmp = 0;
            for (int i = 0; i < n.length(); i++) {
                tmp += n[i] - '0';
            }
            n = to_string(tmp);
        }

        cout << n << endl;
    }
}