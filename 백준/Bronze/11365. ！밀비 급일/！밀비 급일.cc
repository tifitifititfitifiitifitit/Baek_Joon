#include <iostream>
#include <string>
using namespace std;

int main() {
	string x;
	while (1) {
		getline(cin, x);
		if (x == "END") break;

		for (int i = x.length() - 1; i >= 0; i--)cout << x[i];
		cout << endl;
	}
}