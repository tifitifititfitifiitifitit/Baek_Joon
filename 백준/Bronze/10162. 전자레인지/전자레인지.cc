#include<iostream>
using namespace std;

int main() {
	int t, a = 0, b = 0, c = 0;
	cin >> t;

	if (t % 10 == 0) {
		a += t / 300;
		t %= 300;

		b += t / 60;
		t %= 60;

		c += t / 10;
		t %= 10;

		cout << a << " " << b << " " << c;
	}
	else cout << "-1";
}