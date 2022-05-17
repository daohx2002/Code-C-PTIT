#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[1000];
		gets(s);
		if(s[strlen(s)-1] == '6' && s[strlen(s)-2]=='8'){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
