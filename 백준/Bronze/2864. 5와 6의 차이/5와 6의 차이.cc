#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	for (int i = 0; i < max(a.length(), b.length()); i++) {
		if (a[i] == '6') a[i] = '5';
		if (b[i] == '6') b[i] = '5';
	}
	cout << stoi(a) + stoi(b) << " ";

	for (int i = 0; i < max(a.length(), b.length()); i++) {
		if (a[i] == '5') a[i] = '6';
		if (b[i] == '5') b[i] = '6';
	}
	cout << stoi(a) + stoi(b) << " ";
}