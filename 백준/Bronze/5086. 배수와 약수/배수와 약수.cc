#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main() {
	while (1) {
		int a, b;
		cin >> a >> b;
		if (a != 0 && b != 0) {
			if (b % a == 0) cout << "factor" << endl;
			else if (a % b == 0) cout << "multiple" << endl;
			else cout << "neither" << endl;
		}
		else break;
	}
	return 0;
}