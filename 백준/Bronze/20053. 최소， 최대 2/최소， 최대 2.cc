#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int n, tmp, max = -1000000, min = 1000000;
		cin >> n;

		//test case input & min, max
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			if (tmp < min) min = tmp;
			if (tmp > max) max = tmp;
		}

		cout << min << " " << max << endl;
	}
	return 0;
}