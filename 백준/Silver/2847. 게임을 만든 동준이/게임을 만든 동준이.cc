#include<iostream>
using namespace std;

int main() {
	int n, cnt = 0, arr[101];;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 1; i--) {
		while (arr[i] >= arr[i + 1]) {
			arr[i]--;
			cnt++;
		}
	}

	cout << cnt;
}