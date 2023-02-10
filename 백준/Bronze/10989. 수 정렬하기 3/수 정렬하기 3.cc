#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, arr[10001] = { 0 };

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[x]++;
	}

	for (int i = 1; i <= 10000; i++){
		if (arr[i] != 0) {
			for (int j = 1; j <= arr[i]; j++) {
				cout << i << "\n";
			}
		}
	}

	return 0;
}