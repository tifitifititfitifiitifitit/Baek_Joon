#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, compare;

	getline(cin, str);
	getline(cin, compare);

	int cnt = 0; int len = compare.length();

	while (1) {
		int len = compare.length();
		auto x = str.find(compare);

		if (x != string::npos) {
			str.erase(0, x + len);
			cnt++;
		}

		else break;
	}

	cout << cnt;
}