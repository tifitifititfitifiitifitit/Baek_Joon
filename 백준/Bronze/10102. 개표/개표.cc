#include <iostream>
#include <string>
using namespace std;

int main() {
	int v, a = 0, b = 0;
	cin >> v;

	string x;
	cin >> x;

	for (int i = 0; i < v; i++) {
		if (x[i] == 'A') a++;
		if (x[i] == 'B') b++;
	}

	if (a == b) cout << "Tie";
	else cout << (a > b ? "A" : "B");
}