#include<iostream>
using namespace std;

int main() {
	int a, b, sum = 0, index = 1, x = 1;
	cin >> a >> b;

	while (1) {
		for (int i = 1; i <= x; i++) {
			if (index > b) break;
			if (index >= a) sum += x;
			index++;
		}
		if (index > b) break;
		x++;
	}
	cout << sum;
}