#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end());

	//i < n-1인 이유는 20번줄의 i+1에서 out of range가 발생하기 때문
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1]) continue;
		cout << arr[i] << " ";
	}

	cout << arr.back();
}