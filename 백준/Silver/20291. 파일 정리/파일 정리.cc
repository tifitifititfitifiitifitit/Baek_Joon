#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;


int main() {
	int n;
	cin >> n;

	//map은 기본적으로 key를 기준으로 오름차순 정렬된다.
	map<string, int> map;

	for (int i = 0; i < n; i++) {
		string str, tmp;
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '.') {
				for (int k = j + 1; k < str.length(); k++) {
					tmp.push_back(str[k]);
				}
				break;
			}
		}

		map[tmp]++;
	}

	for (auto x : map) {
		cout << x.first << " " << x.second << endl;
	}
}