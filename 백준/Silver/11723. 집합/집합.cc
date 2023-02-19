#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	string command;
	int m, tmp, arr[21] = { 0 };
	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> command;

		if (command == "add") {
			cin >> tmp;
			arr[tmp] = 1;
		}
		if (command == "remove") {
			cin >> tmp;
			arr[tmp] = 0;
		}
		if (command == "check") {
			cin >> tmp;
			cout << (arr[tmp] ? "1\n" : "0\n");
		}
		if (command == "toggle") {
			cin >> tmp;
			arr[tmp] = arr[tmp] ? 0 : 1;
		}
		if (command == "all") {
			for (int j = 1; j <= 20; j++) arr[j] = 1;
		}
		if (command == "empty") {
			for (int j = 1; j <= 20; j++) arr[j] = 0;
		}
	}
}