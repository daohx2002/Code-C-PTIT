#include<stdio.h>
#include<string.h>
int main(){
	char s[10];
	gets(s);
	for(int i=0; i < strlen(s); i++){
		int tmp = s[0];
		s[0] = s[strlen(s) - 1];
		s[strlen(s) - 1] = tmp;
		if(s[0] == '0'){
			for(int j=i; j<strlen(s); j++){
				s[j] = s[j+1];
			}
		}
		printf("%s", s);
		break;
	}
	return 0;
}
