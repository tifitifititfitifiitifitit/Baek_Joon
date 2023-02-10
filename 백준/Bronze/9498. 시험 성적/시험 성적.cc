#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a<60) puts("F");
	if(a>=60&&a<=69) puts("D");
	if(a>=70&&a<=79) puts("C");
	if(a>=80&&a<=89) puts("B");
	if(a>=90&&a<=100) puts("A");
	
}