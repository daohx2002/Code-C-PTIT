#include<stdio.h>
#include<string.h>
int main(){
	char s[100000];
	gets(s);
	printf("%d", strlen(s)-1);
}
