#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		string str;

		cin >> tmp;
		cin >> str;

		for (int j = 1; j <= str.length(); j++) {
			if (j != tmp) cout << str[j - 1];
		}
		cout << endl;
	}
}