#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string a, b, aa, bb;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	string answer;
	answer = to_string(stoi(a) + stoi(b));
	reverse(answer.begin(), answer.end());

	int index = 0;
	while (answer[index] == '0') {
		index++;
	}

	for (int i = index; i < answer.length(); i++) {
		cout << answer[i];
	}
}