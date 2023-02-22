#include<iostream>
using namespace std;

long long memo[67];

long long koong(int n)
{
	if (n < 2) return memo[n] = 1;
	if (n == 2) return memo[n] = 2;
	if (n == 3) return memo[n] = 4;
	memo[0] = 1; memo[1] = 1; memo[2] = 2; memo[3] = 4;

	for (int i = 4; i <= n; ++i)
		memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3] + memo[i - 4];

	return memo[n];
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		long long input;
		cin >> input;
		cout << koong(input) << "\n";
	}
}