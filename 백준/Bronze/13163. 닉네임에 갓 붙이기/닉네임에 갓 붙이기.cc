#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string god, str;

        cin >> god;
        cin.ignore();

        getline(cin, str);

        cout << "god";

        for (int j = 0; j < str.length(); j++) {
            if (isalpha(str[j])) cout << str[j];
        }

        cout << endl;
    }
}