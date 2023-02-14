#include<iostream>
#include<string>
using namespace std;

int main() {
	int t=1;
	cin >> t;

	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;

		int sum = 0, arr[26] = { 0 };
		for (int j = 0; j < str.length(); j++) {
			arr[str[j] -  'A'] = 1;
		}
		for (int j = 0; j < 26; j++) {
			if (!arr[j]) sum += j + 65;
		}
		cout << sum << endl;
	}
}