#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	vector<string> name;
	map<string, double> count;

	int sum = 0;

	while (1) {
		string str;
		getline(cin, str);

		if (str == "") break;

		else {
			count[str] += 1;

			sum++;

			//같은 문자열이 벡터에 없을 때만 추가
			if (count[str] <= 1) name.push_back(str);
		}
		
	}

	//문자열을 사전순으로 정렬
	sort(name.begin(), name.end());

	//소수점 출력 범위 지정
	cout << fixed;
	cout.precision(4);

	for (auto x : name) {
		cout << x << " " << (count[x] / sum) * 100 << endl;
	}
}