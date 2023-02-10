#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	if(n==1) cout<<"*";
	else
	{
		for(i=1;i<=2*n;i++)
		{
			if(i%2==1)
			{
				for(j=1;j<=n;j++)
				{
					if(j%2==0) cout<<" ";
					else cout<<"*";
				}
			}
			else
			{
				for(j=1;j<=n;j++)
				{
					if(j%2==1) cout<<" ";
					else cout<<"*";
				}
			}
			cout<<endl;
		}
	}
}