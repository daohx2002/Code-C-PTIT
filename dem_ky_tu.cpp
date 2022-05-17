#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	int a=0, b=0, c=0;
	for(int i=0; i<strlen(s); i++){
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <='z')){
			a++;
		}
		if(s[i] >= '0' && s[i] <= '9'){
			b++;
		}
	if(s[i] < '0' || (s[i] > '9' && s[i] < 'A') || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z' ){
			c++;
		}
	}
	printf("%d %d %d", a, b ,c);
	return 0;
}
