#include<iostream>
using namespace std;

int main() {
	int winner, max = 0;
	for (int i = 0; i < 5; i++) {
		int tmp, sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> tmp;
			sum += tmp;
		}
		if (sum > max) {
			max = sum;
			winner = i + 1;
		}
	}
	cout << winner << " " << max;
}