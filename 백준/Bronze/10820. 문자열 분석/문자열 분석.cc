#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		string str;
		getline(cin, str);

		if (str == "") break;

		int lower = 0, upper = 0, num = 0, blank = 0;
		for (int i = 0; i < str.length(); i++) {
			if (islower(str[i])) lower++;
			if (isupper(str[i])) upper++;
			if (isdigit(str[i])) num++;
			if (str[i] == ' ') blank++;
		}
		cout << lower << " " << upper << " " << num << " " << blank << endl;
	}
}