#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int i = 0, j = str.length() - 1;
	while (i < j) {
		if (str[i] != str[j]) break;
		i++;
		j--;
	}

	cout << (i >= j ? "1" : "0");
}