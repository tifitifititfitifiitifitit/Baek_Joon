#include<iostream>
using namespace std;

int main() {
	int tmp, sum1 = 0, sum2 = 0;

	for (int i = 0; i < 4; i++) {
		cin >> tmp;
		sum1 += tmp;
	}
	for (int i = 0; i < 4; i++) {
		cin >> tmp;
		sum2 += tmp;
	}

	cout << max(sum1, sum2);
}