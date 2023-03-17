#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main() {
	int n, k, arr[21];
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n - 1; j++) {
			arr[j] = arr[j + 1] - arr[j];
		}
		n--;
	}

	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << ",";
	}
	cout << arr[n - 1];
}