#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n; 

	queue<int> que;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;

		if (tmp == "push") {
			int x;
			cin >> x;
			que.push(x);
		}
		if (tmp == "pop") {
			if (!que.empty()) {
				cout << que.front() << endl;
				que.pop();
			}
			else cout << "-1" << endl;
		}
		if (tmp == "size") {
			cout << que.size() << endl;
		}
		if (tmp == "empty") {
			cout << que.empty() << endl;
		}
		if (tmp == "front") {
			if (!que.empty()) cout << que.front() << endl;
			else cout << "-1" << endl;
		}
		if (tmp == "back") {
			if (!que.empty()) cout << que.back() << endl;
			else cout << "-1" << endl;
		}
	}
} 