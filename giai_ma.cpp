#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[200];
		gets(s);
		for(int i=0; i<strlen(s); i+=2){
			for(int j=i+1; j<=i+1;j++){
				int dem = s[j] - 48;
				while(dem--){
					printf("%c", s[i]);
				}
			}
		}
		printf("\n");
	}
}
