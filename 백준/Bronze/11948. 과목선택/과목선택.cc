#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[4], b, c;
	for (int i = 0; i < 4; i++) cin >> arr[i];
	cin >> b >> c;
	sort(arr, arr + 4);
	cout << arr[1] + arr[2] + arr[3] + max(b, c);
}