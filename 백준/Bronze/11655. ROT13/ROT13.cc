#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i])) {
			str[i] -= 13;
			if (str[i] < 'A') str[i] += 26;
		}
		if (islower(str[i])) {
			str[i] -= 13;
			if (str[i] < 'a') str[i] += 26;
		}
		cout << str[i];
	}
}