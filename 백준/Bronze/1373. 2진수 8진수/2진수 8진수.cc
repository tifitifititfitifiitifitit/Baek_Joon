#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string str, tmp, answer, arr[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	cin >> str;

	reverse(str.begin(), str.end());

	if (str.length() % 3 == 1) str.push_back('00');
	if (str.length() % 3 == 2) str.push_back('0');

	for (int i = 0; i < str.length(); i += 3) {
		tmp.clear();

		for (int j = i; j < i + 3; j++) {
			tmp.push_back(str[j]);
		}

		reverse(tmp.begin(), tmp.end());

		for (int j = 0; j < 8; j++) {
			if (tmp == arr[j]) {
				string x = to_string(j);
				answer += x;
			}
		}
	}

	for (int i = answer.length() - 1; i >= 0; i--) {
		cout << answer[i];
	}
}