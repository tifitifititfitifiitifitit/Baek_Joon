/*
#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		string str;
		getline(cin, str);

		int index = 0;
		while (index < str.length()) {
			int cnt = index;
			while (str[cnt] != ' ' && cnt < str.length()) cnt++;

			cnt -= 1;

			//swap
			int i = index, j = cnt;
			while (i > j) {
				char tmp;
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;

				i++;
				j--;
			}

			index += 2;
		}
		cout << str << endl;
	}
}
*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		string str;
		stack<char> stac;
		getline(cin, str);

		int index = 0;
		while (index < str.length())
		{
			for (int i = index; i < str.length(); i++)
			{
				if (str[i] == ' ') {
					index++;
					break;
				}
				else {
					stac.push(str[i]);
					index++;
				}
			}

			while (stac.empty() != 1) {
				cout << stac.top();
				stac.pop();
			}
			cout << " ";
		}
		cout << endl;
	}
}