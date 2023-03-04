#include<iostream>
#include<string>
using namespace std;


int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		double d;
		string str;

		cin >> d;
		cin.ignore();

		getline(cin, str);

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '@') d *= 3;
			if (str[j] == '%') d += 5;
			if (str[j] == '#') d -= 7;
		}

		cout << fixed;
		cout.precision(2);
		cout << d << endl;
	}
}