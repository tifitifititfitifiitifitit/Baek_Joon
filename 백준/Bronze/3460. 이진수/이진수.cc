#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, now = 0;
		cin >> n;

		while (n != 0) {
			if (n % 2 == 1) cout << now << " ";
			n /= 2;
			now++;
		}
		cout << endl;
	}
}