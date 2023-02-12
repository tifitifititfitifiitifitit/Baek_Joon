#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i])) cout << char(tolower(str[i]));
		if (islower(str[i])) cout << char(toupper(str[i]));
	}
}