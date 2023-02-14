#include<iostream>
#include<string>
using namespace std;

int main() {
	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int n, price, max = 0;
		string name, answer;

		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> price >> name;

			if (price > max) {
				max = price;
				answer = name;
			}
		}
		cout << answer << endl;
	}
}