#include<iostream>
using namespace std;

int main() {
	int tmp, sum, answer = 0;
	cin >> sum;
	for (int i = 0; i < 9; i++) {
		cin >> tmp;
		answer += tmp;
	}
	cout << sum - answer;
}