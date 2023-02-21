#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, m, arr[101] = { 0, };
    cin >> n >> m;

    for (int i = 1; i <= n; i++) arr[i] = i;

    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        
        reverse(arr + a, arr + b + 1);
    }

    for (int i = 1; i <= n; i++) cout << arr[i] << " ";
}