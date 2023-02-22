#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		string a, b;
		cin >> a >> b;

		int a_alpha[26] = { 0, };
		int b_alpha[26] = { 0, };
		int j;
		
		if (a.length() != b.length()) {
			cout << a << " & " << b << " are NOT anagrams.\n";
			continue;
		}

		for (j = 0; j < a.length(); j++) {
			a_alpha[a[j] - 'a']++;
		}
		for (j = 0; j < b.length(); j++) {
			b_alpha[b[j] - 'a']++;
		}
        
		for (j = 0; j < 26; j++) {
			if (a_alpha[j] < b_alpha[j]) {  //b의 알파벳보다 a의 알파벳이 모자라면
				cout << a << " & " << b << " are NOT anagrams.\n";
				break;
			}
		}
		if(j==26) cout << a << " & " << b << " are anagrams.\n";
	}	
}