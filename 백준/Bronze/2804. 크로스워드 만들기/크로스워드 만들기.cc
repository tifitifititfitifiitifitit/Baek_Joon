#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	string a, b;
	cin >> a >>  b;

	int n, m, i, j;
	for (i = 0; i < a.length(); i++) {
		for (j = 0; j < b.length(); j++) {
			if (a[i] == b[j]) {
				n = i;
				m = j;
				break;
			}
		}
		if (j < b.length()) break;
	}

	for (int i = 0; i < b.length(); i++) {
		if (i == m) cout << a << endl;
		else {
			for (int j = 0; j < n; j++) cout << ".";
			cout << b[i];
			for (int j = n + 1; j < a.length(); j++) cout << ".";
			cout << endl;
		}
	}
}