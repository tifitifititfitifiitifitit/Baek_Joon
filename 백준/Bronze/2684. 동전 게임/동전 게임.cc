#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string pattern[8] = { "TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH" };

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;

		int cnt[8] = { 0 };

		for (int j = 0; j < 38; j++) {
			string tmp;
			tmp = tmp + str[j] + str[j + 1] + str[j + 2];
			
			for (int k = 0; k < 8; k++) {
				if (tmp == pattern[k]) cnt[k]++;
			}
		}

		for (int j = 0; j < 8; j++) cout << cnt[j] << " ";
		cout << "\n";
	}
}