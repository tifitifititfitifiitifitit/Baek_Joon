#include <iostream>
using namespace std;

int main() {
    int n, m, arr[101] = { 0, };
    cin >> n >> m;

    for (int i = 1; i <= n; i++) arr[i] = i;

    for (int i = 1; i <= m; i++) {
        int a, b, tmp;
        cin >> a >> b;
        
        tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    for (int i = 1; i <= n; i++) cout << arr[i] << " ";
}