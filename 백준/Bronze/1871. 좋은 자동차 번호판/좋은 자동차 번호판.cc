#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		int front = 0;
		int back = 0;

		front = ((str[0] - 'A') * 26 * 26) + ((str[1] - 'A') * 26) + (str[2] - 'A');
		str.erase(0, 4);
		back = stoi(str);
		
		if (abs(front - back) <= 100) cout << "nice\n";
		else cout << "not nice\n";
		
	}
}