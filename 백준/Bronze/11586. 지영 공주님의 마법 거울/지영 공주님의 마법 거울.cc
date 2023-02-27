#include<iostream>
#include<string>
using namespace std;


int main() {
	int n, k;
	cin >> n;
	cin.ignore();

	string str, arr[101][101];

	for (int i = 1; i <= n; i++) {
		getline(cin, str);
		for (int j = 0; j < n; j++) {
			arr[i][j+1] = str[j];
		}
	}

	cin >> k;

	if (k == 1) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}
	}

	if (k == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = n; j >= 1; j--) {
				cout << arr[i][j];
			}
			cout << endl;
		}
	}

	if (k == 3) {
		for (int i = n; i >= 1; i--) {
			for (int j = 1; j <= n; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
}