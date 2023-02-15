#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			if (isupper(str[j])) cout << char(tolower(str[j]));
			else cout << str[j];
		}

		cout << endl;
	}
}