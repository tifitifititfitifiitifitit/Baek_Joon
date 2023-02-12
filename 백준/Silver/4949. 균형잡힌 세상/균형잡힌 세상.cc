#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	while (1) {
		stack<string> st;
		string x;

		getline(cin, x);

		if (x[0] == '.') break;

		for (int i = 0; i < x.length(); i++) {
			if (x[i] == '(') st.push("(");
			if (x[i] == '[') st.push("[");

			if (x[i] == ')'){
				if (st.empty()) st.push(")");
				else if (st.top() != "(") st.push(")");
				else if (st.top() == "(") st.pop();
			}

			if (x[i] == ']') {
				if (st.empty()) st.push("]");
				else if (st.top() != "[") st.push("]");
				else if (st.top() == "[") st.pop();
			}
		}

		cout << (st.empty() ? "yes\n" : "no\n");
	}
}