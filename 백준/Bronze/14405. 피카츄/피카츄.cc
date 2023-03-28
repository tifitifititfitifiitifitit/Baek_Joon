#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int index = 0, len = str.length();
	while (index < len) {
		if (str[index] == 'p') {
			if (str[index + 1] == 'i') index += 2;
			else {
				cout << "NO";
				break;
			}
		}
		else if (str[index] == 'k') {
			if (str[index + 1] == 'a') index += 2;
			else {
				cout << "NO";
				break;
			}
		}
		else if (str[index] == 'c') {
			if (str[index + 1] == 'h' && str[index + 2] == 'u') index += 3;
			else {
				cout << "NO";
				break;
			}
		}
		else {
			cout << "NO";
			break;
		}
	}
	if (index == len) cout << "YES";
}