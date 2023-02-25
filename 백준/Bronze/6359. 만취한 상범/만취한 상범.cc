#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, cnt = 0;
		cin >> n;

		bool arr[101];

		for (int j = 1; j <= n; j++) {
			arr[j] = true;
			cnt++;
		}

		for (int j = 2; j <= n; j++) {
			for (int k = j; k <= n; k += j) {
				if (arr[k]) {
					arr[k] = false;
					cnt--;
				}
				else {
					arr[k] = true;
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}
}