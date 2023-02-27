#include<iostream>
using namespace std;

int main() {
	int n, input, a = 0, b = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input) a++;
		if (!input) b++;
	}
	cout << (a > b ? "Junhee is cute!" : "Junhee is not cute!");
}