#include<iostream>
using namespace std;

int arr[10001];

int main() {
	int m, n, min=99999, sum=0;
	cin >> m >> n;

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) {
			for (int j = i + i; j <= n; j += i) arr[j] = 1;
		}
		if (i >= m && arr[i] == 0) {
			sum += i;
			if (i < min) min = i;
		}
	}
	if (sum != 0) cout << sum << " " << min;
	else cout << "-1";

	return 0;
}