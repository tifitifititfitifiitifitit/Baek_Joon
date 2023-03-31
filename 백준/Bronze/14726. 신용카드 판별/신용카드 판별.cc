#include<iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;

		int sum = 0;

		for (int j = 0; j < 16; j++) {
			if (j % 2 == 0) {
				int tmp = (str[j] - '0') * 2;
				if (tmp >= 10)	tmp = (tmp / 10) + (tmp % 10);
				sum += tmp;
			}
			else sum += str[j] - '0';
		}

		if (sum % 10 == 0) cout << "T\n";
		else cout << "F\n";
	}
}