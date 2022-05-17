#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[200];
		gets(s);
		int dem=0;
		for(int i=0; i<strlen(s)-1; i++){
			for(int j=i+1; j<i+2; j++)
			if(s[i]-48 == (s[j]-48)+1 || s[i]-48 == (s[j]-48)-1){
				dem++;
			}
		}
		if(dem == strlen(s)-1) printf("YES\n");
		else printf("NO\n");
//		printf("%d %d", dem, strlen(s));
	}
}
