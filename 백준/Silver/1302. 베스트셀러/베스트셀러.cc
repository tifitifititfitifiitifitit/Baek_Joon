#include <iostream>
#include <string>
#include<map>
using namespace std;

int main() {
	int n, max = 1;
	cin >> n;

	string input;
	cin >> input;

	map<string, int> x;
	string answer = input;	//26번 줄에서 비교를 위한 초기값
	x[input]++;

	for (int i = 0; i < n - 1; i++) {	//한 번 입력 받았으니 반복은 한 번 적게
		cin >> input;

		x[input]++;

		if (x[input] > max) {
			max = x[input];
			answer = input;
		}
		else if (x[input] == max) {
			//max가 여러개라면 사전순으로 answer에 저장
			answer = (answer < input ? answer : input);
		}
	}
	cout << answer;
}