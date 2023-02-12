#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	string str;
	cin >> str;

	for (int i = 1; i <= str.length() ; i++) {
		if (i % 10 == 0) cout << str[i-1] << endl;
		else cout << str[i-1];
	}
}