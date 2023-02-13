#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, x = "CAMBRIDGE";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (x.find(str[i]) == string::npos) cout << str[i];
	}
}