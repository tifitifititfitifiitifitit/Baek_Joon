#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b, sum = 0;
		cin >> a >> b;

		if (a == 0) sum += 0;
		else if (a <= 1) sum += 5000000;
		else if (a <= 3) sum += 3000000;
		else if (a <= 6) sum += 2000000;
		else if (a <= 10) sum += 500000;
		else if (a <= 15) sum += 300000;
		else if (a <= 21) sum += 100000;

		if (b == 0) sum += 0;
		else if (b <= 1) sum += 5120000;
		else if (b <= 3) sum += 2560000;
		else if (b <= 7) sum += 1280000;
		else if (b <= 15) sum += 640000;
		else if (b <= 31) sum += 320000;

		cout << sum << endl;
	}
}