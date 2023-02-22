#include <iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	while(1) {
		int input, sum = 0;
		cin >> input;

		if (input == -1) break;

		vector<int> divisor;	//약수를 저장

		for (int j = 1; j < input; j++) {
			if (input % j == 0) {
				divisor.push_back(j);
				sum += j;
			}
		}

		//완전수가 아니면 컨티뉴
		if (sum != input) {		
			cout << input << " is NOT perfect.\n";
			continue;
		}

		cout << input << " = ";
		for (int j = 0; j < divisor.size() - 1; j++) {
			cout << divisor[j] << " + ";
		}
		cout << divisor.back() << endl;
	}	
}