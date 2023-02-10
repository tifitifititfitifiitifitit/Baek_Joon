#include<stdio.h>
char x[5][15];
int main() {

	for(int i=0;i<5;i++) scanf("%s",&x[i][0]);
	
	for(int i=0;i<15;i++) {
		for(int j=0;j<5;j++) {
			if(x[j][i]!='\0')printf("%c",x[j][i]);
		}
	}
}