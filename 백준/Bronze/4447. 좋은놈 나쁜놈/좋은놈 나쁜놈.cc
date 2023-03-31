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

		int g = 0, b = 0;

		for (char x : str) {
			if (x == 'g' || x == 'G') g++;
			if (x == 'b' || x == 'B') b++;
		}

		if (g > b) cout << str << " is GOOD\n";
		if (g < b) cout << str << " is A BADDY\n";
		if (g == b) cout << str << " is NEUTRAL\n";
	}
}