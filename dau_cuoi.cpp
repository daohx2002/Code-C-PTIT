#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[30];
		gets(s);
		if(s[0] == s[strlen(s)-2] && s[1] == s[strlen(s)-1]){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
