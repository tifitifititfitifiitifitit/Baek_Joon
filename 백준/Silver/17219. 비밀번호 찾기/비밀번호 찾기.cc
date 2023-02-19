#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int m, n;
	cin >> m >> n;

	map<string, string> x;

	for (int i = 0; i < m; i++) {
		string adress, password;
		cin >> adress >> password;
		x.insert(make_pair(adress, password));
	}

	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		cout << x[tmp] << endl;
	}
}