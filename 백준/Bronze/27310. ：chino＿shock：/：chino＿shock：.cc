#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	
	int answer = 0;
	for (int i = 0; i<str.length(); i++) {
		if (str[i] == '_') answer += 5;
		if (str[i] == ':') answer += 1;
		answer += 1;
	}

	cout << answer;
}