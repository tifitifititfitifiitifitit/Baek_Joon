#include<iostream>
using namespace std;

int main() {
	int m, now = 1;
	cin >> m;

	for (int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;

		if (x == now || y == now) {
			now = (x == now ? y : x);
		}
	}

	cout << now;
}