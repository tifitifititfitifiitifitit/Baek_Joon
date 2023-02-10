#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b, tmp;
		cin >> a >> b;

		for (int j = a * b; j >= 1; j -= min(a, b)) {
			if (j % a == 0 && j % b == 0) tmp = j;
		}

		cout << tmp << endl;
	}
	return 0;
}