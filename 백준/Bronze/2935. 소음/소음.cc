#include<iostream>
#include<string>
using namespace std;

int main() {
	string a, b;
	char x;

	cin >> a >> x >> b;

	//곱하기
	if (x == '*') {
		cout << "1";
		for (int i = 0; i < a.length() + b.length() - 2; i++)
			cout << "0";
	}

	//더하기
	else {
		//a의 길이와 b의 길이가 같을때
		if (a.length() == b.length()) {
			cout << "2";
			for (int i = 0; i < a.length() - 1; i++) cout << "0";
		}

		//a의 길이와 b의 길이가 다를때
		else {
			if (a.length() > b.length()) {
				int index = a.length() - b.length();
				a.erase(index, a.back());
				cout << a << b;
			}
			else {
				int index = b.length() - a.length();
				b.erase(index, b.back());
				cout << b << a;
			}
		}
	}
}