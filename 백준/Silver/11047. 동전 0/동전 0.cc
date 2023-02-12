#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, k, arr[10], cnt=0;
	cin >> n >> k;

	for (int i = 0; i < n; i++) cin >> arr[i];

	//내림차순 정렬
	sort(arr, arr + n, greater<>());

	for (int i = 0; i < n; i++) {
		cnt += k / arr[i];
		k %= arr[i];
	}
	cout << cnt;
}