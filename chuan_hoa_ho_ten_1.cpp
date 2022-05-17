#include<stdio.h>
#include<string.h>
int main(){
	char s[200];
	gets(s);
	strlwr(s);
//	int i=0;
//	while(s[i] == ' '){
//		s[i] = s[i+1];
//		i++;
//		if(s[i] != ' '){
//			puts(s);
//		}
//	}
	for(int i=0; i<strlen(s); i++){
		if(s[i] == ' '){
			s[i] = s[i+1];
		}
		else{
			s[i] = s[i] - 32;
			break;
		}
	}
	puts(s);
}
