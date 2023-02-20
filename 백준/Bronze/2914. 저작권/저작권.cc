#include<iostream>

using namespace std;

int main() {
	int A, I;
	cin >> A >> I;

	if (A == 1) cout << I;
	else {
		cout << (I - 1) * A + 1;
	}
}