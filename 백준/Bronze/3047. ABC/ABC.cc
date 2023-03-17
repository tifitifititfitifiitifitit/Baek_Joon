#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[3];
	char str[4];
	
	for (int i = 0; i < 3; i++) cin >> arr[i];

	cin >> str;

	sort(arr, arr + 3);

	for (int i = 0; i < 3; i++) {
		if (str[i] == 'A') cout << arr[0] << " ";
		if (str[i] == 'B') cout << arr[1] << " ";
		if (str[i] == 'C') cout << arr[2] << " ";
	}
}