#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int arr[4] = { 0, };
	arr[1] = 1;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A') {
			swap(arr[1], arr[2]);
		}
		if (str[i] == 'B') {
			swap(arr[2], arr[3]);
		}
		if (str[i] == 'C') {
			swap(arr[1], arr[3]);
		}
	}

	for (int i = 1; i <= 3; i++) {
		if (arr[i] == 1) cout << i;
	}
}