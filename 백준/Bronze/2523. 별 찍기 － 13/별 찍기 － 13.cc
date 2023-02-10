#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=2*n-1;i++)
	{
		if(i<=n)
		{
			for(j=1;j<=i;j++) cout<<"*";
		}
		else
		{
			for(j=2*n-i;j>=1;j--) cout<<"*";
		}
		cout<<endl;
	}
}