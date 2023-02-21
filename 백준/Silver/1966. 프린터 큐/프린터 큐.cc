#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	
	for (int i = 0; i < test_case; i++) {
		int n; //문서의 개수
		int m; //찾고자 하는 문서의 위치
		int cnt = 0; //m이 몇 번째로 출력되는지 카운트

		cin >> n >> m;

		queue<pair<int,int>> que;
		priority_queue<int> index; //내림차순 정렬된 큐

		for (int j = 0; j < n; j++) {
			int input;
			cin >> input;

			que.push({j, input});
			index.push(input);
		}

		while (!que.empty()) {
			int now = que.front().first;
			int value = que.front().second;
			que.pop();

			if (index.top() == value) {
				index.pop();
				cnt++;

				if (now == m) {
					cout << cnt << endl;
					break;
				}
			}

			else {
				que.push({ now, value });
			}
		}
	}
}