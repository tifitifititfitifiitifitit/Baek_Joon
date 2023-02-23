#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string str;
	getline(cin, str);

	int i, sad = 0, happy = 0;
	for (i = 0; i < str.length(); i++) {
		if (str[i] == ':') {
			if (str[i + 2] == ')') happy++;
			if (str[i + 2] == '(') sad++;
		}
	}

	if (sad == 0 && happy == 0) cout << "none";
	else if (sad == happy) cout << "unsure";
	else if (sad < happy) cout << "happy";
	else if (sad > happy) cout << "sad";
}