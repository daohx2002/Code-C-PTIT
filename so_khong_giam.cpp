#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d",&test);
	scanf("\n");
	while(test--){
		int dem=0;
		char s[500];
		gets(s);
		for(int i=0; i<strlen(s);i++){
			if(s[i] <= s[i+1]) dem++;
		}
//		printf("%d\n", dem);
		if(dem==strlen(s)-1) printf("YES\n");
		else printf("NO\n");
	}
}
