#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	int n;
	stack<int> stk;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;

		if (x == "push") {
			int tmp;
			cin >> tmp;
			stk.push(tmp);
		}
		if (x == "pop") {
			if (!stk.empty()) {
				cout << stk.top() << endl;
				stk.pop();
			}
			else cout << "-1" << endl;
		}
		if (x == "size") cout << stk.size() << endl;
		if (x == "empty") cout << stk.empty() << endl;
		if (x == "top") {
			if (!stk.empty()) cout << stk.top() << endl;
			else cout << "-1" << endl;
		}
	}
	return 0;
}