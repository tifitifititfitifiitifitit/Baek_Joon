#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		string str;
		getline(cin, str);

		if (str == "#") break;

		int cnt = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'a' || str[i] == 'A') cnt++;
			if (str[i] == 'i' || str[i] == 'I') cnt++;
			if (str[i] == 'u' || str[i] == 'U') cnt++;
			if (str[i] == 'e' || str[i] == 'E') cnt++;
			if (str[i] == 'o' || str[i] == 'O') cnt++;
		}

		cout << cnt << endl;
	}
}