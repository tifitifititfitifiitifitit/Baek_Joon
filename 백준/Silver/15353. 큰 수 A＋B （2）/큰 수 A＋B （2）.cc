#include<iostream>
#include<string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	int a_len = a.length();
	int b_len = b.length();

	int num_1 = 0, num_2 = 0, plus = 0, index = 0, answer[10001];

	//a_len이 참이거나, b_len이 참이거나, 올림수가 있을 때
	while (a_len || b_len || plus) {
		if(a_len) num_1 = a[(a_len--)-1] - '0';
		if(b_len) num_2 = b[(b_len--)-1] - '0';

		answer[index++] = (num_1 + num_2 + plus) % 10;
		plus = (num_1 + num_2 + plus) / 10;

		num_1 = num_2 = 0;
	}

	for (int i = index-1; i >= 0; i--) cout << answer[i];
	return 0;
}