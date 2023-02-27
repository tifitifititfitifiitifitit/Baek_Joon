#include<iostream>
using namespace std;

int main() {
	int input, sum = 0;
	for (int i = 0; i < 4; i++) {
		cin >> input;
		sum += input;
	}
	cout << sum / 60 << endl;
	cout << sum % 60;
}