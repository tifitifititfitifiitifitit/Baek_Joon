#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	string str[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };

	string tmp;
	cin >> tmp;

	long long sum = 0;

	for (int i = 0; i < 10; i++) {
		if (tmp == str[i]) {
			sum = i * 10;
			break;
		}
	}

	cin >> tmp;

	for (int i = 0; i < 10; i++) {
		if (tmp == str[i]) {
			sum += i;
			break;
		}
	}

	cin >> tmp;
	
	if (tmp == str[0]) cout << sum;
	else {
		for (int i = 1; i < 10; i++) {
			sum *= 10;
			if (tmp == str[i])break;
		}
		cout << sum;
	}
}