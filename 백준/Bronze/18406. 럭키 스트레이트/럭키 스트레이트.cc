#include<iostream>
#include<string>
using namespace std;

int main() {
	string str, tmp;
	cin >> str;
	
	int front = 0, back = 0;

	for (int i = 0; i < str.length() / 2; i++) {
		tmp = str[i];
		front += stoi(tmp);
	}

	for (int i = str.length() /  2; i < str.length(); i++) {
		tmp = str[i];
		back += stoi(tmp);
	}

	cout << (front == back ? "LUCKY" : "READY");
}