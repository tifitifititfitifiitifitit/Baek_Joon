#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void x(string str) {
	int cnt = 0, index = 0;
	while (1) {
		if (index >= str.length()) break;

		if (str[index] == 'X') cnt++;
		if (str[index] == '.' || index == str.length() - 1) {
			if (cnt % 2 == 1) {
				cout << "-1";
				break;
			}

			while (cnt / 4 != 0) {
				cout << "AAAA";
				cnt -= 4;
			}

			if (cnt == 2) {
				cout << "BB";
				cnt = 0;
			}
			if (str[index] == '.') cout << ".";
		}
		index++;
	}
}

int main() {
	string str;
	cin >> str;

	int i, cnt = 0, index = 0;
	
	while (1) {
		if (index >= str.length()) break;

		if (str[index] == 'X') cnt++;
		if (str[index] == '.' || index == str.length() - 1) {
			if (cnt % 2 == 1) {
				cout << "-1";
				break;
			}
		}

		index++;
	}

	if (index == str.length()) x(str);
}