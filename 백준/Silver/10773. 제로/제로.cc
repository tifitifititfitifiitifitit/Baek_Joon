#include<iostream>
#include<stack>
using namespace std;

int main() {
	int n,m,sum=0;
	stack<int> st;
	
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>m;
		
		if(m!=0) st.push(m);
		else st.pop();
	}
	
	for(int i=1;;i++) {
		if(st.empty()) break;
		sum+=st.top();
		st.pop();
	}
	
	cout<<sum;
}