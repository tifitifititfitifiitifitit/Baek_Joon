#include<iostream>
using namespace std;

int main() {
	int n, i;
	cin >> n;

	for (i = 1; i <= n; i++) {
		int sum = i, tmp = i;

		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}

		if (sum == n) {
			cout << i;
			break;
		}
	}
	if (i == n + 1) cout << "0";
}