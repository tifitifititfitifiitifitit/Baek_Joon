#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	double b, avg = 0, sum = 0;
	for (int i = 0; i < 20; i++) {
		string a, c;
		cin >> a >> b >> c;

		if (c == "A+") avg += 4.5 * b;
		if (c == "A0") avg += 4.0 * b;
		if (c == "B+") avg += 3.5 * b;
		if (c == "B0") avg += 3.0 * b;
		if (c == "C+") avg += 2.5 * b;
		if (c == "C0") avg += 2.0 * b;
		if (c == "D+") avg += 1.5 * b;
		if (c == "D0") avg += 1.0 * b;
		
		if (c != "P") sum += b;
	}

	cout <<avg / sum;
}