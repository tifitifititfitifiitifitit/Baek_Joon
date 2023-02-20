#include<iostream>
using namespace std;

int main() {
	int arr[101] = { 0 }; //1만 이하의 완전제곱수는 99개다
	int index = 1, x = 1;

	while (1) {
		if (index > 100) break;
		arr[index] = x * x;
		index++;
		x++;
	}

	int m, n;
	cin >> m >> n;

	int min = n, sum = 0;

	for (auto i : arr) {
		if (i > n) break;
		if (i >= m) {
			min = (min > i ? i : min);
			sum += i;
		}
	}

	if (sum == 0) cout << "-1";
	else {
		cout << sum << endl << min;
	}
}