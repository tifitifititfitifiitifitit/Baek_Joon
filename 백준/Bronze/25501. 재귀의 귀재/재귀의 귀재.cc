#include <stdio.h>
#include <string.h>

int cnt=99;

int recursion(const char *s, int l, int r){
	cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
	cnt=0;
    return recursion(s, 0, strlen(s)-1);
}

int main(){
	int n;
	scanf("%d", &n);
	
	char x[1000];
	for(int i=0; i<n; i++) {
		scanf("%s", &x);
		isPalindrome(x);
		printf("%d %d\n", isPalindrome(x), cnt);
	}
}