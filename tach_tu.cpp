#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	for(int i=0; i<strlen(s); i++){
		printf("%c", s[i]);
		if(s[i] == ' '){
			printf("\n");
		}
	}
}
