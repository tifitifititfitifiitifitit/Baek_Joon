#include<iostream>
#include<string>
using namespace std;

int main() {
	string x;
	int i,cnt=0;
	cin>>x;
	
	for(i=0;x[i]!='\0';i++) {
		if(x[i]>='A'&&x[i]<='C') cnt+=3;
		if(x[i]>='D'&&x[i]<='F') cnt+=4;
		if(x[i]>='G'&&x[i]<='I') cnt+=5;
		if(x[i]>='J'&&x[i]<='L') cnt+=6;
		if(x[i]>='M'&&x[i]<='O') cnt+=7;
		if(x[i]>='P'&&x[i]<='S') cnt+=8;
		if(x[i]>='T'&&x[i]<='V') cnt+=9;
		if(x[i]>='W'&&x[i]<='Z') cnt+=10;
	}
	
	cout<<cnt;
}