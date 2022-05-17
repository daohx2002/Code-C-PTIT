#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[200];
		gets(s);
		int dem=1;
		for(int i=0; i<strlen(s);){
			for(int j=i+1; j<strlen(s);j++){
				if(s[i] == s[j]){
					dem++;
				}
				else break;
			}
			printf("%c%d", s[i], dem);
			i+=dem;
			dem=1;
		}
		printf("\n");
	}
}
