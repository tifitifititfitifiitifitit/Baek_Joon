#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
	return a.second > b.second;
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		vector<pair<string, int>> vec;
		int n;
		
		cin >> n;

		for (int j = 0; j < n; j++) {
			string name;
			int value;
			cin >> name >> value;
			vec.push_back({ name, value });
		}

		sort(vec.begin(), vec.end(), compare);
		
		cout << vec[0].first << endl;
	}
}