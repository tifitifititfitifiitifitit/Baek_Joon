#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char x[1000001];
	cin.getline(x, 1000001);
	
	int cnt=0, len=strlen(x);
	
	for(int i=0; i<len; i++) {
		if(x[i]==' ') cnt++;
	}
	
	if(x[0]==' ') cnt--;
	if(x[len-1]==' ') cnt--;
	
	cout<<cnt+1;
}