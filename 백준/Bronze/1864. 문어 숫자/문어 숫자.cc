#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	while (1) {
		string str;
		cin >> str;

		if (str == "#") break;

		int sum = 0, upper = str.length() - 1;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '-') sum += 0;
			else if (str[i] == '\\') sum += 1 * pow(8, upper);
			else if (str[i] == '(') sum += 2 * pow(8, upper);
			else if (str[i] == '@') sum += 3 * pow(8, upper);
			else if (str[i] == '?') sum += 4 * pow(8, upper);
			else if (str[i] == '>') sum += 5 * pow(8, upper);
			else if (str[i] == '&') sum += 6 * pow(8, upper);
			else if (str[i] == '%') sum += 7 * pow(8, upper);
			else if (str[i] == '/') sum += -1 * pow(8, upper);
			upper--;
		}

		cout << sum << endl;
	}
}