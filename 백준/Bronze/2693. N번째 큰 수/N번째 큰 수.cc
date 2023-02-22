#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		vector<int> arr;
		for (int j = 0; j < 10; j++) {
			int tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}
		sort(arr.begin(), arr.end());
		cout << arr[7] << endl;
	}
}