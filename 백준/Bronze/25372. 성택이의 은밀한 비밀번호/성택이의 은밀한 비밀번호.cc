#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		string str;
		cin >> str;

		int len = str.length();

		if (len >= 6 && len <= 9) cout << "yes\n";
		else cout << "no\n";
	}	
}