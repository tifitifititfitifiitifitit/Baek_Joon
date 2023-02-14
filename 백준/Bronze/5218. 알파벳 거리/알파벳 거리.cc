#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;

		cout << "Distances: ";

		for (int j = 0; j < a.length(); j++) {
			if (a[j] == b[j]) cout << "0";
			else if (a[j] < b[j]) cout<< (b[j] - a[j]);
			else cout<< b[j] + 26 - a[j];
			cout << " ";
		}

		cout << endl;
	}
}