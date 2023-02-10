#include<stdio.h>

int main() {
	int c,n;
	scanf("%d",&c);
	
	while(c--) {
		scanf("%d",&n);
		int arr[n+1],sum=0;
		double avg=0;
		
		for(int i=1;i<=n;i++) {
			scanf("%d",&arr[i]);
			sum+=arr[i];
		}
		
		avg=(double)sum/n;
		
		int cnt=0;
		for(int i=1;i<=n;i++) {
			if(arr[i]>avg) cnt++;
		}
		
		printf("%.3f%%\n",(double)cnt/n*100);
	}
}