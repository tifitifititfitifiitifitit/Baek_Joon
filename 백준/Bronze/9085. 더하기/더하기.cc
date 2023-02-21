#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, sum = 0;
		cin >> n;

		for (int j = 0; j < n; j++) {
			int tmp;
			cin >> tmp;
			sum += tmp;
		}
		cout << sum << endl;
	}
}