#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	int index = 1;
	queue<int> que;

	while (1) {
		string str;
		getline(cin, str);

		if (str == "") break;

		if (str.find("FBI") != string::npos) que.push(index);

		index++;
	}

	if (que.empty()) cout << "HE GOT AWAY!";
	else{
		while (!que.empty()) {
			cout << que.front()<<" ";
			que.pop();
		}
	}
}