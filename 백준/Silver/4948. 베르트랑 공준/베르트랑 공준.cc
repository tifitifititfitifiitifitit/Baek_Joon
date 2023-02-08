#include<iostream>
using namespace std;

int arr[250000];

int main() {
	arr[1] = 1;
	for (int i = 2; i <= 250000; i++) {
		if (arr[i] == 0) {
			for (int j = i + i; j <= 250000; j += i) arr[j] = 1;
		}
	}

	while (1) {
		int n, cnt = 0;
		cin >> n;

		if (n == 0) break;
		else {
			for (int i = n+1; i <= n * 2; i++) {
				if (arr[i] == 0) cnt++;
			}
			cout << cnt << "\n";
		}
	}


	return 0;
}