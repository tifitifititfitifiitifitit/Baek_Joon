#include<iostream>
#include<string>
using namespace std;

int main() {
	string x;
	cin>>x;
	
	int index=0, cnt=0;
	while(x[index]!=NULL) {
		if(x[index]=='c' && x[index+1]=='=') index+=1;
		if(x[index]=='c' && x[index+1]=='-') index+=1;
		if(x[index]=='d' && x[index+1]=='-') index+=1;
		if(x[index]=='l' && x[index+1]=='j') index+=1;
		if(x[index]=='n' && x[index+1]=='j') index+=1;
		if(x[index]=='s' && x[index+1]=='=') index+=1;
		if(x[index]=='z' && x[index+1]=='=') index+=1;
		if(x[index]=='d' && x[index+1]=='z' && x[index+2]=='=') index+=2;
		index++;
		cnt++;
	}
	
	cout<<cnt;
	
	return 0;
}