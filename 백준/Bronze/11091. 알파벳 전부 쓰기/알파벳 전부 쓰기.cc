#include<iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();

	for (int i = 0; i < t; i++) {
		string str;
		getline(cin, str);

		bool alpha[26] = { false };
		int cnt = 0;

		for (char x : str) {
			if (isupper(x)) {
				if (!alpha[x - 'A']) {
					alpha[x - 'A'] = true;
					cnt++;
				}
			}
			if (islower(x)) {
				if (!alpha[x - 'a']) {
					alpha[x - 'a'] = true;
					cnt++;
				}
			}
		}
		
		if (cnt == 26) cout << "pangram\n";
		else {
			cout << "missing ";
			for (int i = 0; i < 26; i++) {
				if (!alpha[i]) cout << char(i + 'a');
			}
			cout << endl;
		}
	}
}