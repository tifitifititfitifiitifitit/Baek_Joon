#include<iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	
	int cost=c-b;	//판매비용-가변비용=순이익
	 
	if(cost<=0) cout<<"-1";
	else cout<<a/cost+1;	//순이익=0 방지(+1)
}