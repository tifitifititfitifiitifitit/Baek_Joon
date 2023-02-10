#include<iostream>
#include <algorithm>
#include<string>
using namespace std;

int main() {
	string a;
	cin >> a;

	sort(a.begin(), a.end(), greater<int>());

	cout << a;

	return 0;
}