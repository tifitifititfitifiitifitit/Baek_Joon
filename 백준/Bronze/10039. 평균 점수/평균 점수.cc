#include<iostream>
using namespace std;

int main()
{
	int sum=0;
	for(int i=1;i<=5;i++)
	{
		int m;
		cin>>m;
		if(m<40) sum+=40;
		else sum+=m;
	}
	cout<<sum/5;
}