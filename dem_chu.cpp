#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	for(int i=0; i<strlen(s)-1; i++){
		for(int j=i+1; j<strlen(s); j++){
			if(s[i] > s[j]){
				char tmp;
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
	for(int i=1; i<strlen(s); i++){
		printf("%c", s[i]);
	}
	return 0;
}
