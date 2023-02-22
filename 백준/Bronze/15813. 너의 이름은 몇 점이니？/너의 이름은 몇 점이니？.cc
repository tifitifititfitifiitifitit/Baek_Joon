#include <iostream>
#include<string>
using namespace std;

int main() {
    int len, sum = 0;
    string str;

    cin >> len >> str;

    for (auto x : str) {
        sum += x - 'A';
    }
    
    //A=0, Z=25이지만 문제에서 A는 1이기때문에 1*LEN을 더해준다
    cout << sum + len;
}