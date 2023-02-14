#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();	//엔터를 버퍼에서 제거

	for (int i = 0; i < n; i++) {
		string str;
		getline(cin, str);

		str[0] = toupper(str[0]);

		cout << str << endl;
	}
}
