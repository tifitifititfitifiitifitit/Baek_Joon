#include<iostream>
using namespace std;

int main()
{
	int n,m,k,i;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		if(m<k) cout<<m<<" ";
	}
}