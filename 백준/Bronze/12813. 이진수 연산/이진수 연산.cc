#include<iostream>
#include<string>
#define SIZE 100000
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	//A & B
	for (int i = 0; i < SIZE; i++) {
		if (a[i] == '1' && b[i] == '1') cout << 1;
		else cout << 0;
	}
	cout << endl;
	
	//A | B
	for (int i = 0; i < SIZE; i++) {
		if (a[i] == '1' || b[i] == '1') cout << 1;
		else cout << 0;
	}
	cout << endl;

	//A ^ B
	for (int i = 0; i < SIZE; i++) {
		if (a[i] != b[i]) cout << 1;
		else cout << 0;
	}
	cout << endl;

	//~A
	for (int i = 0; i < SIZE; i++) {
		if (a[i] == '1') cout << 0;
		else cout << 1;
	}
	cout << endl;

	//~B
	for (int i = 0; i < SIZE; i++) {
		if (b[i] == '1') cout << 0;
		else cout << 1;
	}
}