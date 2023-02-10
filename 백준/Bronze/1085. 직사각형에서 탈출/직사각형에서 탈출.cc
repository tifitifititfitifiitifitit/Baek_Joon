#include<iostream>
using namespace std;

int main() {
	int x,y,w,h,min=1000;
	cin>>x>>y>>w>>h;
	
	if(x<min) min=x;		//0~x 거리 
	if(y<min) min=y;		//0~y 거리
	if(w-x<min) min=w-x;	//x~w 거리 
	if(h-y<min) min=h-y; 	//y~w 거리
	
	cout<<min; 
}