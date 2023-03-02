#include<iostream>
#include<queue>
using namespace std;

int main() {
	queue<int> que;

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) que.push(i);

	cout << "<";
	while (!que.empty()) {
		for (int i = 1; i < k; i++) {
			int tmp = que.front();
			que.push(tmp);
			que.pop();
		}

		cout << que.front();
		if (que.size() != 1) cout << ", ";
		que.pop();
	}
	cout << ">";
}