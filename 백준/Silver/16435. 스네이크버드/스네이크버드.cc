#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;

	vector<int> vec;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	for (int x : vec) {
		if (x <= l) l++;
		else break;
	}
	
	cout << l;
}