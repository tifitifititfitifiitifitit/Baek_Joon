#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long sum = 0;
	string a, b;
    
	cin >> a >> b;

	for (auto x : a) {
		for (auto y : b) {
			sum = sum + (x - '0') * (y - '0');
		}
	}

	cout << sum;
}