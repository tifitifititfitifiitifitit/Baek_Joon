#include<iostream>
using namespace std;

int arr[1000001];

int main() {
	int m, n;
	cin >> m >> n;

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) {
			for (int j = i + i; j <= n; j += i) arr[j] = 1;
		}
		if (i >= m && arr[i] == 0) cout << i << "\n";
	}

	return 0;
}