#include<iostream>
using namespace std;

int main() {
	int e, s, m;
	cin >> e >> s >> m;

	int a = 1, b = 1, c = 1, ans = 1;
	while (1) {
		if (a == e && b == s && c == m) {
			cout << ans;
			break;
		}

		a++;
		b++;
		c++;

		if (a == 16) a = 1;
		if (b == 29) b = 1;
		if (c == 20) c = 1;

		ans++;
	}
}