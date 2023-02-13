#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	string binary[8] = { "000","001","010","011","100","101","110","111" };

	for (int i = 0; i < str.length(); i++) {
		if (i == 0) cout << stoi(binary[str[i] - '0']); //맨 앞의 0을 제거
		else cout << binary[str[i]-'0'];
	}
}
