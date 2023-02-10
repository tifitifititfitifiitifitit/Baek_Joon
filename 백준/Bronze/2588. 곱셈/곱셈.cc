#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int k1=(b%10)*a;
	int k2=(b/10)%10*a;
	int k3=(b/100)*a;
	printf("%d\n",k1);
	printf("%d\n",k2);
	printf("%d\n",k3);
	printf("%d\n",k1+k2*10+k3*100);
}