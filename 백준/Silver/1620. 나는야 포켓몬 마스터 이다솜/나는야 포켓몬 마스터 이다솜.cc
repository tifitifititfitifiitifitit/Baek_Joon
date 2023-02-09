#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	cin.tie(NULL);
    cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	map<string, int> Pokemon;
    string name, arr[100001];
    
	for (int i = 1; i <= n; i++) {
		cin >> name;

		Pokemon.insert(make_pair(name, i));
		arr[i] = name;
	}

	string input;
	for(int i=1; i<=m; i++) {
		cin >> input;

		if (Pokemon.find(input) != Pokemon.end()) {
			cout << Pokemon.find(input)->second << "\n";
		}
		else {
			cout << arr[stoi(input)] << "\n";
		}
	}
}