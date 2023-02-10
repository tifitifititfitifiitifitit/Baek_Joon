#include<iostream>
using namespace std;

int main() {
	//소수를 저장하는 배열
	int arr[10001] = { 0 };
	for (int i = 2; i <= 10000; i++) {
		if (arr[i]==0) {
			for (int j = i + i; j <= 10000; j += i) arr[j] = 1;
		}
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		
		for (int j = tmp / 2; j > 0; j--) {
			if (arr[j] == 0 && arr[tmp - j] == 0) {
				cout << j << " " << tmp - j << endl;
				break;
			}
		}
	}

	return 0;
}