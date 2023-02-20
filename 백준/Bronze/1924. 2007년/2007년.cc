#include<iostream>
#include<string>
using namespace std;

int main() {
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int x, y, i = 1, j = 1, cnt = 1;

	cin >> x >> y;

	while(1) {
		if (i == x && j == y) break;

		j++;

		if (j > month[i]) {
			j = 1;
			i++;
		}
        
		cnt++;
        
		if (cnt > 7) cnt = 1;
	}

	switch (cnt) {
		case 1:
			cout << "MON";
			break;
		case 2:
			cout << "TUE";
			break;
		case 3:
			cout << "WED";
			break;
		case 4:
			cout << "THU";
			break;
		case 5:
			cout << "FRI";
			break;
		case 6:
			cout << "SAT";
			break;
		case 7:
			cout << "SUN";
			break;
	}
}