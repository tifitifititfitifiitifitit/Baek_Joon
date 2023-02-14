#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str, tmp;
		cin >> str;

		tmp = str[str.length() - 1];
		if (stoi(tmp) % 2) cout << "odd\n";
		else cout << "even\n";
	}
}
