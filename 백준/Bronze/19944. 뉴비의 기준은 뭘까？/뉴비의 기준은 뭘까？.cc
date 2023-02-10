#include<iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	
	if(n>=m) {
		if(m<=2) cout<<"NEWBIE!";
		else cout<<"OLDBIE!"; 
	}
	else cout<<"TLE!";
	
	return 0;
}