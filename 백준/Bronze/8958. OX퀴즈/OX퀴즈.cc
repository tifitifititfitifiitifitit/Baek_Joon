#include <stdio.h>
char v[80];
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        int sum=0,x=1;
        scanf("%s",&v);
        for(int j=0;v[j]!='\0';j++) {
            if (v[j] =='O') {
                sum+=x;
                x++;
            }
            if (v[j]=='X') x=1;
        }
        printf("%d\n", sum);
    }
}