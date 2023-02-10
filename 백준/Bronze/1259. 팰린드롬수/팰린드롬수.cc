#include<iostream>
#include<string.h>
using namespace std;

int main() {
	while(1) {
		char x[10000];
		cin>>x;
		int i,n=strlen(x),a=0,b=n-1;
		
		if(x[0]=='0') break;
		
		for(i=0;i<n/2;i++) {
			if(x[a]!=x[b]) break;
			a++;
			b--;
		}
		cout<<(i==n/2 ? "yes\n" : "no\n");
	}
}