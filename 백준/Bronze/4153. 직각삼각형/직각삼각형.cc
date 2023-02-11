#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	while (1) {
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;

		sort(arr, arr+3);	//오름차순 정렬

		int c = arr[2] * arr[2];
		int a_b = (arr[1] * arr[1]) + (arr[0] * arr[0]);		

		if (c == a_b) cout << "right\n";
		else cout << "wrong\n";
	}
}