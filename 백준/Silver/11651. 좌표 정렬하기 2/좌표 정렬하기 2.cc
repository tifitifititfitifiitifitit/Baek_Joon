#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		arr.push_back(pair<int, int>(b, a));
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
		cout << arr[i].second << " " << arr[i].first << "\n";
}