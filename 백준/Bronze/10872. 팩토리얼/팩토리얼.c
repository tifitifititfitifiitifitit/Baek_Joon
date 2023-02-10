#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
    
	if(n==0) n=1;
	for(int i=n-1;i>1;i--) n*=i;
    
	printf("%d",n);	
}