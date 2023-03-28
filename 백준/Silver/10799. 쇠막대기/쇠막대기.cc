#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	stack<char> st;
	int cnt = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') st.push('(');
		if (str[i] == ')') {
			if (str[i - 1] == '(') {
				st.pop();
				cnt += st.size();
			}
			if (str[i - 1] == ')') {
				st.pop();
				cnt++;
			}
		}
	}

	cout << cnt; 
}