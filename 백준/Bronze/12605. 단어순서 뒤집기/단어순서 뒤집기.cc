#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		vector<string> vec;
		string str, tmp;

		getline(cin, str);

		for (int j = 0; j < str.length(); j++) {
			if (isalpha(str[j])) {
				tmp.push_back(str[j]);
			}
			else {
				vec.push_back(tmp);
				tmp.clear();
			}
		}

		vec.push_back(tmp);

		reverse(vec.begin(), vec.end());

		cout << "Case #" << i + 1 << ": ";
		for (auto x : vec) {
			cout << x << " ";
		}

		cout << endl;
	}
}