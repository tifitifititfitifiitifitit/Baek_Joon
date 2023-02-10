#include<iostream>
using namespace std;

int main() {
    int t, s;
    cin>>t>>s;

    if(s) cout<<"280";
    else {
        if(t<=11 || t>16) cout<<"280";
        else cout<<"320";
    }
}