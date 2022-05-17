#include<stdio.h>
#include<string.h>
int main(){
	char s[200];
	gets(s);
	int thuong=0, hoa=0;
	for(int i=0; i<strlen(s); i++){
		if(s[i]>='a' && s[i]<='z'){
			thuong++;
		}
		else hoa++;
	}
	if(thuong>=hoa){
		for(int i=0; i<strlen(s); i++){
			if(s[i]>='A' && s[i] <= 'Z'){
				printf("%c", s[i] + 32);
			}
			else printf("%c", s[i]);
		}
	}
	else{
		for(int i=0; i<strlen(s); i++){
			if(s[i]>='a' && s[i] <= 'z'){
				printf("%c", s[i] - 32);
			}
			else printf("%c", s[i]);
		}
	}
}
