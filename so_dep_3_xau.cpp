#include<stdio.h>
#include<string.h>
#include<math.h>
int ktnt(int n){
	if(n<2){
		return 0;
	}
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int main(){
	int test, dem=0, sum=0, count =0;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[505];
		gets(s);
		for(int i=0; i<strlen(s); i++){
			if(ktnt(s[i]-48)==1){
				dem++;
			}
		}
		for(int i=0; i<strlen(s)/2; i++){
			if(s[i] == s[strlen(s)-i-1]){
				count++;
			}
		}
		if(dem == strlen(s) && count==(strlen(s)/2)){
			printf("YES\n");
		}
		else printf("NO\n");
		dem=0;
		sum=0;
		count=0;
	}
}

