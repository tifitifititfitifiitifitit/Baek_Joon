#include<iostream>
using namespace std;

int main() {
	int i, arr[8];
	for (i = 0; i < 8; i++) {
		cin >> arr[i];
	}

	for (i = 0; i < 7; i++) {
		if (arr[i] != arr[i + 1] - 1) break;
	}

	if (i == 7) cout << "ascending";
	else {
		for (i = 0; i < 7; i++) {
			if (arr[i] != arr[i + 1] + 1) break;
		}
		cout << (i == 7 ? "descending" : "mixed");
	}
	
}