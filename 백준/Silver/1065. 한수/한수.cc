#include<iostream>
using namespace std;

void x(int n) {
	int cnt = 0;
	for(int i=1; i<=n; i++) {
		//1~99
		if(i<100) cnt++;
		
		//100~n
		else if(i!=1000) {
			int tmp=i, index=0, arr[4] = {0};
			
			//자릿수 분할 
			while(tmp>0) {
				arr[index] = tmp%10;
				tmp /= 10;
				index++;
			}
			
			//한수 판별 
			if(arr[0]-arr[1]==arr[1]-arr[2]) cnt++;
		} 
	}
	cout<<cnt;
}

int main() {
	int n;
	cin>>n;
	x(n);
}