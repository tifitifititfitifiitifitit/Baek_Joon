#include<iostream>
using namespace std;

int main() {
	int input, min = 100, sum = 0;

	for (int i = 0; i < 7; i++) {
		cin >> input;
		if (input % 2) {
			sum += input;
			if (input < min) min = input;
		}
	}

	if (min == 100) cout << "-1";
	else cout << sum << endl << min;
}