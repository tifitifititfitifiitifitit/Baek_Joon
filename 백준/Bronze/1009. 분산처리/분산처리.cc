#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;

		int sum = 1;

		for (int j = 1; j <= b; j++) {
			sum *= a;
			sum %= 10;
		}

		cout << (sum ? sum : 10) << endl;
	}
}