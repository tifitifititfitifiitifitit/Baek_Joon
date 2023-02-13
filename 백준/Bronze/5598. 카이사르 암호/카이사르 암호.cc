#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		str[i] -= 3;
		if (str[i] < 'A') str[i] += 26;
		cout << str[i];
	}
}