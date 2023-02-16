#include<iostream>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	map<int, int> a;
	int n, x;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		a[x] = 2;
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;

		a[x]++;

		if (a[x] != 1) cout << "1\n";
		else cout << "0\n";
	}
}