#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(b<45)
	{
		if(a==0) printf("23 %d",60-(45-b));
		else printf("%d %d",a-1,60-(45-b));
	}
	else
	{
		printf("%d %d",a,b-45);
	}
}