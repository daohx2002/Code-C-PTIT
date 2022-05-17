#include<stdio.h>
#include<string.h>
int main(){
	int test, dem=0;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[205];
		gets(s);
		for(int i=0; i<strlen(s); i++){
			if(s[i]=='0' || s[i] =='2' || s[i]=='4' || s[i]=='6' || s[i]=='8'){
				dem++;
			}
		}
		if(dem == strlen(s)){
			printf("YES\n");
		}
		else printf("NO\n");
		dem=0;
	}
}

