#include<iostream>
#include<string>
using namespace std;

int main() {
	while (1) {
		string str;
		getline(cin, str);

		if (str == "#") break;

		int cnt = 0, alpha[26] = { 0, };
		
		for (char x : str) {
			if (isupper(x)) {
				if (!alpha[x - 'A']) {
					alpha[x - 'A'] = 1;
					cnt++;
				}
			}
			if (islower(x)) {
				if (!alpha[x - 'a']) {
					alpha[x - 'a'] = 1;
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}
}