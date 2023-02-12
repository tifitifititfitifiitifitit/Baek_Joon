#include<iostream>
using namespace std;

int arr[10001] = { 0 };

void self_num(int i) {
	int tmp, sum = i;
	while (sum <= 10000) {
		tmp = sum;
		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		arr[sum] = 1;
	}
}

int main() {
	for (int i = 1; i <= 10000; i++) {
		self_num(i);
	}

	for (int i = 1; i <= 10000; i++) {
		if (!arr[i]) cout << i << endl;
	}
}