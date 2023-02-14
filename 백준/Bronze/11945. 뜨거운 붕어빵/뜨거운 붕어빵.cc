#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();

	string str;
	for (int i = 0; i < n; i++) {
		getline(cin, str);
		for (int j = str.length() - 1; j >= 0; j--) cout << str[j];
		cout << endl;
	}
}