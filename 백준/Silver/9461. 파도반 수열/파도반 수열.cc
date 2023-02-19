#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	long long arr[101];

	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;

	for (int i = 6; i <= 100; i++) {
		arr[i] = arr[i - 1] + arr[i - 5];
	}

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int tmp;
		cin >> tmp;
		cout << arr[tmp] << endl;
	}
}