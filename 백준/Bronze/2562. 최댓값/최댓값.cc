#include<iostream>
using namespace std;
int main()
{
	int n,i,tmp,max=0;

	for(i=1;i<=9;i++)
	{
		cin>>n;
		if(n>max)
		{
			max=n;
			tmp=i;
		}
	}
	cout<<max<<endl<<tmp;
}