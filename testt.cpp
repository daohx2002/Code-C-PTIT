#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s1[1000];
		char s2[1000];
		gets(s1);
		gets(s2);
		for(int i=0; i<strlen(s1); i++){
			for(int j=0; j<strlen(s2); j++){
				if(s1[i] -48 < s2[j] -48){
					s1[i] = s2[j];
					s2[j] = '0';
				}
			}
		}
		for(int i=0; i<strlen(s1); i++){
			printf("%c", s1[i]);
		}
		printf("\n");
	}
}
