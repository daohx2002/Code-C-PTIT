#include<stdio.h>
#include<string.h>
int main(){
	int test, dem=1;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[205];
		gets(s);
		for(int i=0; i<strlen(s)-1; i++){
			if(s[i] == ' ' && s[i+1] != ' '){
				dem++;
			}
		}
		printf("%d\n", dem);
		dem=1;
	}
}
