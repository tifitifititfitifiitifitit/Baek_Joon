#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, input;
	cin >> n;

	vector<int> vec;

	for (int i = 0; i < n; i++) {
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	for (auto x : vec) cout << x << "\n";
}