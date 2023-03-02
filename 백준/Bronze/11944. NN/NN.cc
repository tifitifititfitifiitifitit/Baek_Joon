#include<iostream>
#include<string>
using namespace std;

int main() {
	string n, str;
	int  m;

	cin >> n >> m;

	for (int i = 0; i < stoi(n); i++) {
		str += n;
	}

	if (str.size() >= m) {
		for (int i = 0; i < m; i++) {
			cout << str[i];
		}
	}
	else {
		for (int i = 0; i < stoi(n); i++) {
			cout << n;
		}
	}
}