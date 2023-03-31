#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, i;
	cin >> n;
	
	string compare, input;
	cin >> compare >> input;

	//오름차순
	if (compare < input) {
		compare = input;
		for (i = 2; i < n; i++) {
			cin >> input;
			if (compare > input) {
				cout << "NEITHER";
				break;
			}
		}
		if (i == n) cout << "INCREASING";
	}
	//내림차순
	else if (compare > input) {
		compare = input;
		for (i = 2; i < n; i++) {
			cin >> input;
			if (compare < input) {
				cout << "NEITHER";
				break;
			}
		}
		if (i == n) cout << "DECREASING";
	}
	
}