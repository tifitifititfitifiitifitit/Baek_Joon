#include<iostream>
using namespace std;

int main() {
	int a,b,c,d,e;
	cin>>a;
	int min=a;
	cin>>b;
	if(b<min) min=b;
	cin>>c;
	if(c<min) min=c;
	cin>>d>>e;
	if(d>e) min+=e-50;
	else min+=d-50;
	cout<<min;
}