#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	queue<int> que;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;

		if (x == "push") {
			int tmp;
			cin >> tmp;
			que.push(tmp);
		}
		if (x == "pop") {
			if (!que.empty()) {
				cout << que.front() << "\n";
				que.pop();
			}
			else cout << "-1" << "\n";
		}
		if (x == "size") cout << que.size() << "\n";
		if (x == "empty") cout << que.empty() << "\n";
		if (x == "front") {
			if (!que.empty()) cout << que.front() << "\n";
			else cout << "-1" << "\n";
		}
		if (x == "back") {
			if (!que.empty()) cout << que.back() << "\n";
			else cout << "-1" << "\n";
		}
	}
	return 0;
}