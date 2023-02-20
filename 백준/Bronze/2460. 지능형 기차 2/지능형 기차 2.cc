#include<iostream>
using namespace std;

int main() {
	int human = 0, max = 0, a, b;
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		human -= a;
		human += b;
		if (human > max) max = human;
	}
	cout << max;
}