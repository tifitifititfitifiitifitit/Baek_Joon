#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	string a, b;
	cin >> a >> b;

	if (strstr((char*)a.c_str(), (char*)b.c_str()) != NULL) cout << "1";
	else cout << "0";
}