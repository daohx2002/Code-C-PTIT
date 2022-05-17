#include<stdio.h>
#include<string.h>
int main(){
	int test, dem=0, sum=0, count =0;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[505];
		gets(s);
		if(s[0] == '8' && s[strlen(s)-1] == '8'){
			dem++;
		}
		for(int i=0; i<strlen(s); i++){
			sum += s[i]-48;
		}
		for(int i=0; i<strlen(s)/2; i++){
			if(s[i] == s[strlen(s)-i-1]){
				count++;
			}
		}
		if(dem == 1 && sum%10==0 && count==(strlen(s)/2)){
			printf("YES\n");
		}
		else printf("NO\n");
		dem=0;
		sum=0;
		count=0;
	}
}

