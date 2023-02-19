#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	string str[20000];
	
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	sort(str, str + n, compare);

	for (int i = 0; i < n; i++) {
		if (str[i] == str[i + 1]) continue;
		cout << str[i] << endl;
	}
}