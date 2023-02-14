#include<iostream>
#include<string>
using namespace std;

int main() {
	string str, x;
	getline(cin, str);

	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != ',') x.push_back(str[i]);
		else {
			sum += stoi(x);
			x.clear();
		}
	}
	cout << sum + stoi(x); //마지막 숫자는 12번줄의 조건에 걸리지 않으므로 직접추가해준다
}