#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
    cin>>n;
    
	queue<int> que;
    
	for (int i = 1; i <= n; i++) {
		que.push(i);
	}
    
	while (1) {
		cout << que.front()<<" ";
		que.pop();

		if (que.empty()) break;

		int tmp = que.front();
		que.pop();
		que.push(tmp);
	}
}