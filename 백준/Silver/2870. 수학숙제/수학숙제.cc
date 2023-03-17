#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

string tmp;

void erase() {
	if (tmp[0] == '0') {
		for (int i = 0; i < tmp.length(); i++) {
			if (tmp[i] != '0') {
				tmp.erase(0, i);
				break;
			}
		}
		if (tmp[0] == '0') tmp = "0";
	}
}

bool cmp(string a, string b) {
	if (a.length() < b.length()) return true;	//a < b
	if (a.length() > b.length()) return false;	//a > b

	//a.length() == b.length()
	for (int i = 0; i < a.length(); i++) {
		if (a[i] < b[i]) return true;
		if (a[i] > b[i]) return false;
	}

	//a == b
	return false;
}

int main() {
	int n;
	cin >> n;

	vector<string> vec;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			if (isdigit(str[j])) {
				tmp.push_back(str[j]);
			}
			else {
				if (!tmp.empty()) {
					erase();
					vec.push_back(tmp);
					tmp.clear();
				}
			}
		}

		if (!tmp.empty()) {
			erase();
			vec.push_back(tmp);
			tmp.clear();
		}
	}

	std::sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << "\n";
	}
}