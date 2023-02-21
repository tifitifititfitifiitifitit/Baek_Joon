#include <iostream>
using namespace std;

int main() {
    int n, m, arr[101] = { 0, };
    cin >> n >> m;

    for (int x = 0; x < m; x++) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int y = i; y <= j; y++) {
            arr[y] = k;
        }
    }
    
    for (int x = 1; x <= n; x++) {
        cout << arr[x] << " ";
    }
}