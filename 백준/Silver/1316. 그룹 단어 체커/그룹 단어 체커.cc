#include<iostream>
using namespace std;

int main() {
	int n, cnt=0;
	cin>>n;
	
	for(int i=1;i<=n;i++) {
		int abc[30]={0,};
		char x[101]={0,};
		bool t=true;
		
		cin>>x;
		
		for(int j=0;x[j]!='\0';j++) {
			if(x[j]!=x[j-1]&&abc[x[j]-'a']) {
				t=false;
				break;
			}
			abc[x[j]-'a']++;
		}
		
		if(t) cnt++;
	}
	
	cout<<cnt;	
}