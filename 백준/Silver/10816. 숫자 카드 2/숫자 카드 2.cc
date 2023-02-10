#include<iostream>
#include<map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m, input;
	map<int, int> arr;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;

		//arr에 input이 key값인 노드가 없다면 자동으로 insert해준다
		//자동 insert된 노드의 value는 초기값으로 0을 가진다
		arr[input]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input;

		if (arr.find(input) != arr.end()) cout << arr[input] << " ";
		else cout << "0 ";
	}
}