#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[200];
		gets(s);
		int m = strlen(s)/2;
		int trung=0, khac=0;
		for(int i=0; i<m; i++){
			if(s[i] != s[strlen(s)-i-1]){
				khac++;
			}
		}
		if(khac==1 || (strlen(s)%2==1 && khac==0)) printf("YES\n");
		else printf("NO\n");
	}
}
