#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
	string num[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int n, m;
	cin >> n >> m;

	vector<pair<string, int>> vec;

	for (int i = n; i <= m; i++) {
		if (i >= 10) {
			string tmp = num[i / 10] + num[i % 10];
			vec.push_back({ tmp, i });
		}
		else vec.push_back({ num[i % 10], i });
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++) {
		if ((i + 1) % 10 == 0) cout << vec[i].second << "\n";
		else cout << vec[i].second << " ";
	}
}