#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	string a, b, c;
	cin >> a >> b >> c;

	int cnt = 1, max = 1;
	for (int i = 1; i < 8; i++) {
		if (a[i - 1] == a[i]) {
			cnt++;
			if (cnt > max) {
				max = cnt;
			}
		}
		else cnt = 1;
	}
	cout << max << endl;

	cnt = 1, max = 1;
	for (int i = 1; i < 8; i++) {
		if (b[i - 1] == b[i]) {
			cnt++;
			if (cnt > max) {
				max = cnt;
			}
		}
		else cnt = 1;
	}
	cout << max << endl;

	cnt = 1, max = 1;
	for (int i = 1; i < 8; i++) {
		if (c[i - 1] == c[i]) {
			cnt++;
			if (cnt > max) {
				max = cnt;
			}
		}
		else cnt = 1;
	}
	cout << max << endl;
}