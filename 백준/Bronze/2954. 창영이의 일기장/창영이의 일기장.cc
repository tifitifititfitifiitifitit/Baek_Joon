#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++) {
		cout << str[i];
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			i += 2;
		}
	}
}