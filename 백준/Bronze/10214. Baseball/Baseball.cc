#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int y = 0, k = 0;

		for (int j = 0; j < 9; j++) {
			int a, b;
			cin >> a >> b;
			y += a;
			k += b;
		}

		if (y > k) cout << "Yonsei\n";
		if (y < k) cout << "Korea\n";
		if (y == k) cout << "Draw\n";
	}
}