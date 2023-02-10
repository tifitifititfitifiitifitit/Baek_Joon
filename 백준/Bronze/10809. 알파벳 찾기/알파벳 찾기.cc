#include<iostream>
using namespace std;

int main() {
	char x[100];
	int abc[26];
	cin>>x;
	
	//초기화  
	for(int i=0;i<26;i++) abc[i]=-1;
	
	//탐색 
	for(int i=0;x[i]!='\0';i++) {
        //처음 등장한 알파벳이면
		if(abc[x[i]-'a']==-1) {
            abc[x[i]-'a']=i;
        }
	}
	
	//출력
	for(int i=0;i<26;i++) cout<<abc[i]<<" "; 
}