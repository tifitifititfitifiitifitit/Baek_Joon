#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, tmp = 0, cnt = 0;
	cin >> n;

	char x[100][100];

	//입력
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		for (int j = 0; j < n; j++) {
			x[i][j] = str[j];
		}
	}

	//가로
	for (int i = 0; i < n; i++) {
		tmp = 0;

		for (int j = 0; j < n; j++) {
			if (x[i][j] == '.') tmp++;

			if (x[i][j] == 'X' || j == n - 1) {
				if (tmp >= 2) cnt++;
				tmp = 0;
			}
		}
	}

	cout << cnt << " ";

	cnt = 0;

	//세로
	for (int i = 0; i < n; i++) {
		tmp = 0;

		for (int j = 0; j < n; j++) {
			if (x[j][i] == '.') tmp++;

			if (x[j][i] == 'X' || j == n - 1) {
				if (tmp >= 2) cnt++;
				tmp = 0;
			}
		}
	}
	
	cout << cnt;
}