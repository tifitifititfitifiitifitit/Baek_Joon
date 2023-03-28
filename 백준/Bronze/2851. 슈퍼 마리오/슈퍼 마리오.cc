#include<iostream>
#include<string>
using namespace std;

int main() {
	int sum = 0, arr[10];
	for (int i = 0; i < 10; i++) cin >> arr[i];
	for (int i = 0; i < 10; i++) {
		if (sum + arr[i] >= 100) {
			if (sum + arr[i] - 100 <= 100 - sum) cout << sum + arr[i];
			else cout << sum;
			return 0;
		}
		sum += arr[i];
	}
	cout << sum;
}