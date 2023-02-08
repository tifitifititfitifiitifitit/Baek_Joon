#include<iostream>
using namespace std;

int main() {
	int n, i, cnt = 0;
	cin >> n;

	for (i = 1; cnt < n; i++) {
		int tmp = i;
        
		while (tmp > 0) {
			if (tmp % 1000 == 666) {
				cnt++;
				break;
			}
			else tmp /= 10;
		}
        
	}
	cout << i-1;
}