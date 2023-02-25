#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, input;
	cin >> n;

	vector<int> vec;

	for (int i = 1; i <= n; i++) {
		cin >> input;
		vec.insert(vec.begin() + input, i);
	}

	reverse(vec.begin(), vec.end());

	for (auto i : vec) cout << i << " ";
}