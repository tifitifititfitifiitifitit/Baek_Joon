#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') cnt++;
		if (str[i] == 'i') cnt++;
		if (str[i] == 'u') cnt++;
		if (str[i] == 'e') cnt++;
		if (str[i] == 'o') cnt++;
	}

	cout << cnt;
}