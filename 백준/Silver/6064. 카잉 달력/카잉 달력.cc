#include<iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int t, m, n, x, y, i, j;
	
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> m >> n >> x >> y;

		int max = lcm(m, n);

		for (j = x; j <= max; j += m) {
			if (j % n == 0) {
				if (n == y) {
					cout << j << endl;
					break;
				}
			}
			else {
				if (j % n == y) {
					cout << j << endl;
					break;
				}
			}
		}
		if (j > max) cout << "-1\n";
	}
}