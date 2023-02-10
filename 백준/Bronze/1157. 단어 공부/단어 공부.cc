#include<stdio.h>

int main() {
	char x[1000001];
	int abc[30]={0,};
	int i, max=-1, dap=0;
	
	scanf("%s",&x);
	
	for(i=0;x[i]!='\0';i++) {
		if(x[i]>='A'&&x[i]<='Z') abc[x[i]-'A']++;	 
		else abc[x[i]-'a']++;
	}
	
	for(i=0;i<=26;i++) {	
		if(abc[i]>max) {
			max=abc[i];
			dap=i;
		}
		else if(abc[i]==max) dap=-2; //'A'-2=='?'
	}
	
	printf("%c",dap+'A');
}