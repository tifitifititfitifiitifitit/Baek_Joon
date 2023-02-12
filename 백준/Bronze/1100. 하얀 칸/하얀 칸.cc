#include<iostream>
#include<string>
using namespace std;

int main() {
	int cnt = 0;
	string str;
	for (int i = 1; i <= 8; i++) {
		cin >> str;
		if (i % 2 == 0) {
			for (int j = 2; j <= 8; j += 2) if (str[j - 1] == 'F') cnt++;
		}
		else {
			for (int j = 1; j <= 8; j += 2) if (str[j - 1] == 'F') cnt++;
		}
	}
	cout << cnt;
}