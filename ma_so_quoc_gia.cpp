#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[200];
		gets(s);
		for(int i=0; i<strlen(s); ){
			if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4'){
				i+=3;
			}
			else{
				printf("%c", s[i]);
				i++;
			}
		}
		printf("\n");
	}
	return 0;
}
