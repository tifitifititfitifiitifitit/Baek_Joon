#include<iostream>
using namespace std;

int main() {
	int n, a = 100, b = 100;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int aa, bb;
		cin >> aa >> bb;

		if (aa < bb) a -= bb;
		if (aa > bb) b -= aa;
	}

	cout << a << endl << b;
}