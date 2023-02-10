#include <stdio.h>
int main() {
    int n,cnt=0;
    scanf("%d",&n);
 
    while(1) {
        if(n%5==0) {
            cnt+=n/5;
            printf("%d", cnt);
            break;
        }
        n-=3;
        cnt++;
 
        if(n<0){
            printf("-1");
            break;
        }
    }
}
