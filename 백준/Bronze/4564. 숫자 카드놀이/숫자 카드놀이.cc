#include<iostream>
using namespace std;

int main() {
	while (1) {
		int n, answer=1;
		cin >> n;

		if (n == 0) break;

		cout << n << " ";
		while (n /10 != 0) {
			answer = 1;
			while (n > 0) {
				answer *= n % 10;
				n /= 10;
			}
			n = answer;
			cout << answer << " ";
		}
		cout << endl;
	}
}