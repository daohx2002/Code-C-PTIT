#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	char xau[100];
	int k=0;
	for(int i=0; i<strlen(s); i++){
		if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
			xau[k] = s[i];
			k++;
		}
	}
	for(int i=0; i<k; i++){
		printf(".");
		if(xau[i] >= 'A' && xau[i] <='Z'){
			printf("%c", xau[i] - 32);
		}
		else printf("%c", xau[i]);
	}
}
