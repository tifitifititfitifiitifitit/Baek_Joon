#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, arr[1001], front[1001], back[1001];
	
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	
	for (int i = 1; i <= n; i++) {
		front[i] = 1;
		for (int j = 1; j <= i; j++) {
			if (arr[j] < arr[i] && front[i] < front[j] + 1) {
				front[i] = front[j] + 1;
			}
		}
	}

	for (int i = n; i >= 1; i--) {
		back[i] = 1;
		for (int j = n; j >= i; j--) {
			if (arr[i] > arr[j] && back[i] < back[j] + 1) back[i] = back[j] + 1;
		}
	}

	int max = 0;
	for (int i = 1; i <= n; i++) {
		if (front[i] + back[i] - 1 > max) max = front[i] + back[i] - 1;
	}

	cout << max;
}