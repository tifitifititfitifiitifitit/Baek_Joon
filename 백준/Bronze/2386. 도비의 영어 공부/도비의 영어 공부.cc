#include<iostream>
#include<string>
using namespace std;

int main() {
	while (1) {
		char x;
		cin >> x;
		cin.ignore();

		if (x == '#') break;

		string str;
		getline(cin, str);

		int cnt = 0;
		for (int i = 0; i < str.length(); i++) {
			if(tolower(str[i]) == x) cnt++;

		}

		cout << x << " " << cnt << endl;
	}
}