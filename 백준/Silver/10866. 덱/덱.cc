#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main() {
	int n;
	deque<int> deq;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;

		if (x == "push_front") {
			int tmp;
			cin >> tmp;
			deq.push_front(tmp);
		}
		if (x == "push_back") {
			int tmp;
			cin >> tmp;
			deq.push_back(tmp);
		}
		if (x == "pop_front") {
			if (!deq.empty()) {
				cout << deq.front() << endl;
				deq.pop_front();
			}
			else cout << "-1" << endl;
		}
		if (x == "pop_back") {
			if (!deq.empty()) {
				cout << deq.back() << endl;
				deq.pop_back();
			}
			else cout << "-1" << endl;
		}
		if (x == "size") cout << deq.size() << endl;
		if (x == "empty") cout << deq.empty() << endl;
		if (x == "front") {
			if (!deq.empty()) cout << deq.front() << endl;
			else cout << "-1" << endl;
		}
		if (x == "back") {
			if (!deq.empty()) cout << deq.back() << endl;
			else cout << "-1" << endl;
		}
	}
	return 0;
}