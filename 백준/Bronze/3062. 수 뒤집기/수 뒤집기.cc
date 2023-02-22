#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int test;
	cin >> test;
	
	for (int i = 0; i < test; i++) {
		string x;
		cin >> x;

		int a = stoi(x);				//string to int
		reverse(x.begin(), x.end());	//reverse the string
		a += stoi(x);					//a + reversed string
		x = to_string(a);				//x = int to string a

		int j = 0, k = x.length() - 1;	//pointer
		while (j < k) {
			if (x[j] != x[k]) {
				cout << "NO\n";
				break;
			}
			j++;
			k--;
		}
		if (j >= k) {
			cout << "YES\n";
		}
	}	
}