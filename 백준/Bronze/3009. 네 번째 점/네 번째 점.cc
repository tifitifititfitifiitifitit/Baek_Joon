#include<iostream>
using namespace std;

int main() {
	int x1, y1;
	int x2, y2;
	int x3, y3;

	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	if (x1 == x2) cout << x3 << " ";
	if (x1 == x3) cout << x2 << " ";
	if (x2 == x3) cout << x1 << " ";

	if (y1 == y2) cout << y3;
	if (y1 == y3) cout << y2;
	if (y2 == y3) cout << y1;
}