#include<iostream>
#include<queue>
using namespace std;


int main() {
	int n, k;
	cin >> n >> k;

	queue<int> que;
	for (int i = 1; i <= n; i++) que.push(i);

	cout << "<";
	while (!que.empty()) {
		for (int i = 1; i < k; i++) {
			int tmp = que.front();
			que.push(tmp);
			que.pop();
		}

		if (que.size() == 1) cout << que.front();
		else cout << que.front() << ", ";

		que.pop();
	}
	cout << ">";
}