#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m, i, sum=0;
	vector<int> a, b;
	
	cin>>n;
	
	for(i=0; i<n; i++){
		cin>>m;
		a.push_back(m);
	}
	for(i=0; i<n; i++){
		cin>>m;
		b.push_back(m);
	}
	
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end());
	
	for(i=0; i<n; i++) {
		sum+=a[i]*b[i];
	}
	
	cout<<sum;
}