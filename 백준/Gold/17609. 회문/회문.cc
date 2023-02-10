#include<bits/stdc++.h>
char a[100001],b[100001];
int main(){
    int n,k,i,s,e,c=0;
    std::cin>>n;
    while(n--){
        scanf("%s",&a);
        k=strlen(a);
        for(i=0;i<k;i++){
            if(a[i]!=a[k-1-i]){
                s=i;
                e=k-1-i;
                break;
            }
        }
        if(i==k){
            puts("0");
            continue;
        }
        c=0;
        for(i=0;i<k;i++)
			if(i!=s) b[c++]=a[i];
        for(i=0;i<c;i++) 
			if(b[i]!=b[c-1-i]) break;
        if(i==c) {
            puts("1");
            continue;
        }
        c=0;
        for(i=0;i<k;i++)
			if(i!=e) b[c++]=a[i];
        for(i=0;i<c;i++)
			if(b[i]!=b[c-1-i]) break;
        if(i==c) {
            puts("1");
            continue;
        }
        puts("2");
    }
    return 0;
}
