#include<iostream>
#include<map>
using namespace std;

int main() {
	int sum = 0, max = 0, tmp;
	map<int, int> map;

	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;

		sum += input;
		map[input]++;
		
		if (map[input] > max) {
			max = map[input];
			tmp = input;
		}
	}

	cout << sum / 10 << endl;
	cout << tmp;
}