#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int JOI = 0, IOI = 0;

	for (int i = 0; i < str.length() - 2; i++) {
		if (str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I') JOI++;
		if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') IOI++;
	}

	cout << JOI << endl << IOI;
}