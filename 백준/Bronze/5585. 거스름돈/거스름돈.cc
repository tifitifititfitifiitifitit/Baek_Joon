#include<iostream>
using namespace std;

int main() {
	int n, answer = 0;
	cin >> n;

	n = 1000 - n;

	answer += n / 500;
	n %= 500;

	answer += n / 100;
	n %= 100;

	answer += n / 50;
	n %= 50;

	answer += n / 10;
	n %= 10;

	answer += n / 5;
	n %= 5;

	answer += n / 1;
	n %= 1;

	cout << answer;
}