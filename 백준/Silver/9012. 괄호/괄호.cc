#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool Process(string x) {
	stack<int> st;
	for(int i=0;x[i]!='\0';i++) {
		if(x[i]=='(') st.push(x[i]);
		else {
			if(st.empty()) return false;	//'('가 없을 경우 
			else st.pop();
		}
	}
	return st.empty();						//스택이 비었는지 확인 
}

int main() {
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++) {
		string x;
		cin>>x;
		cout<<(Process(x)?"YES\n":"NO\n");
	}
}
