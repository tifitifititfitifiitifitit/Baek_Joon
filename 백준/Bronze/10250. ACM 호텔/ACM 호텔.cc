#include <iostream>
using namespace std;

int main() {
	int t, h, w, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;

		if (n % h == 0) cout << h * 100 + (n / h) << endl;
		else cout << (n % h) * 100 + (n / h) + 1 << endl;
	}
}