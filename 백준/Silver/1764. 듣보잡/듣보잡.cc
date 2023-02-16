#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n, m, cnt = 0;
	string tmp;
	map<string, int> x;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		x[tmp]++;
	}

	//듣보잡의 이름을 저장할 벡터
	vector<string> vec;

	for (int i = 0; i < m; i++) {
		cin >> tmp;
		x[tmp]++;

		if (x[tmp] == 2) {
			vec.push_back(tmp);
			cnt++;
		}
	}
	
	//사전순 정렬
	sort(vec.begin(), vec.end());

	//출력
	cout << cnt << endl;
	for (auto str : vec) {
		cout << str << endl;
	}

}