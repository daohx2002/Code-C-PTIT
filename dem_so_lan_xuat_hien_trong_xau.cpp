#include<stdio.h>
#include<string.h>
int main(){
	char s[200];
	gets(s);
	int b[200];
	for(int i=0; i<strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] + 32;
		}	
	}
	char mang;
	for(int i=0; i<strlen(s); i++){
		if(s[i] != ' '){
			mang += s[i];
		}
		else b[mang]++;
		mang=0;
	}
	for(int i=0; i<strlen(s); i++){
		if(s[i] != 0) 
	}
}
