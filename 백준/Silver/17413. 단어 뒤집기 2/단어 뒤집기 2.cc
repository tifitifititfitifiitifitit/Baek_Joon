#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string str, tmp;
	getline(cin, str);

	bool tag = false;

	int index = 0;
	while (index < str.size()) {
		if (str[index] == '<') {
			reverse(tmp.begin(), tmp.end());
			cout << tmp;
			tmp.clear();

			while (1) {
				cout << str[index];
				if (str[index] == '>') break;
				else index++;
			}
		}
		else if (str[index] != ' ') tmp.push_back(str[index]);
		else {
			reverse(tmp.begin(), tmp.end());
			cout << tmp << " ";
			tmp.clear();
		}
		index++;
	}
	reverse(tmp.begin(), tmp.end());
	cout << tmp;
}