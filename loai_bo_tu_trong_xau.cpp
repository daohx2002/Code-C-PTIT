#include<stdio.h>
#include<string.h>
int main(){
	char s1[100], s2[100], dem=0;
	gets(s1);
	gets(s2);
	for(int i=0; i<strlen(s1); i++){
		for(int j=0; j<strlen(s2); j++){
			if(s1[i] == s2[j]){
				dem++;
				i++;
			}
		}
	}
	printf("%d", strlen(s1));
}
