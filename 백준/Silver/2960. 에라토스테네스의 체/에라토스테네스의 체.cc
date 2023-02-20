#include<iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int arr[1001];

	for (int i = 1; i <= n; i++) arr[i] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			if (arr[j]) {
				if (k == 1) cout << j;
				//else cout << j << " ";
				arr[j] = 0;
				k--;
			}
		}
	}
}