#include<iostream>
using namespace std;

int main() {
	bool pc[101];
	for (int i = 1; i <= 100; i++) pc[i] = false;

	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		
		if (pc[input]) cnt++;
		else pc[input] = true;
	}

	cout << cnt;
}