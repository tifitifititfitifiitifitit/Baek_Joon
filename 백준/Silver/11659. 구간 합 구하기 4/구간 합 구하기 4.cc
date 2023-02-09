#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, input;
	cin >> n >> m;

	vector<int> arr;
	
	for (int k = 0; k < n; k++) {
		int input;
		cin >> input;
		arr.push_back(input);

		if (k) arr[k] = arr[k - 1] + input;
	}

	for (int k = 0; k < m; k++) {
		int i, j;
		cin >> i >> j;
		if (i - 2 < 0) cout << arr[j - 1] << "\n";
		else cout << arr[j - 1] - arr[i - 2] << "\n";
	}
}