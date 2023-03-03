#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		if (str[str.length() / 2] == str[(str.length() / 2) - 1 ]) cout << "Do-it\n";
		else cout << "Do-it-Not\n";
	}
}