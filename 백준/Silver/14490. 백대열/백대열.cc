#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void x(int a, int b) {
	int min = b;
	for (int i = min; i > 1; i--) {
		if (a% i == 0 && b % i == 0) {
			a /= i;
			b /= i;
		}
	}
	cout << a << ":" << b;
}


int main() {
	string a, b;
	cin >> a;

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == ':') {
			b = a.substr(i+1, a.length());	//범위의 문자열을 반환
			a.erase(i, a.length());			//반환한 문자열을 삭제
		}
	}

	x(stoi(a), stoi(b));
}