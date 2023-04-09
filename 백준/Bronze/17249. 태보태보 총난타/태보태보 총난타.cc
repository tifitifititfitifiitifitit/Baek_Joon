#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int cnt = 0;
	
	for (auto x : str) {
		if (x == '@') cnt++;
		if (x == '0') {
			cout << cnt << " ";
			cnt = 0;
		}
	}
	cout << cnt;
}