#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, alpha[26] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		alpha[tmp[0] - 'a']++;
	}

	bool x = true;

	for (int i = 0; i < 26; i++) {
		if (alpha[i] >= 5) {
			cout << char(i + 'a');
			x = false;
		}
	}

	if (x) cout << "PREDAJA";
}