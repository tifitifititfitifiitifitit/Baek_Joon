#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int garo = (n - 1) + (m - 1) * n;
	int sero = (m - 1) + (n - 1) * m;

	cout << (garo < sero ? garo : sero);
}