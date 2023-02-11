#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int n, m, cnt = 0;
	cin >> n >> m;

	string tmp;
	map<string, int> str;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		str.insert(make_pair(tmp, 0));
	}

	for (int i = 0; i < m; i++) {
		cin >> tmp;
		if (str.find(tmp) != str.end()) cnt++;
	}
	cout << cnt;
}