#include<stdio.h>
#include<strings.h>
void min(char s1[], char s2[]){
    long long a=0, b=0;
    for(int i=0; i<strlen(s1); i++){
        if(s1[i] == '6') s1[i] = '5';
        a = a * 10 + s1[i] - '0';
    }
    for(int i=0; i<strlen(s2); i++){
        if(s2[i] == '6') s2[i] = '5';
        b = b * 10 + s2[i] - '0';
    }
    printf("%lld ",  a+b);
}
void max(char s1[], char s2[]){
    long long a=0, b=0;
    for(int i=0; i<strlen(s1); i++){
        if(s1[i] == '5') s1[i] = '6';
        a = a * 10 + s1[i] - '0';
    }
    for(int i=0; i<strlen(s2); i++){
        if(s2[i] == '5') s2[i] = '6';
        b = b * 10 + s2[i] - '0';
    }
    printf("%lld",  a+b);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    	scanf("\n");
    	char s1[100], s2[100];
	    scanf("%s%s", s1, s2);
	    min(s1, s2);
	    max(s1, s2);
	    printf("\n");
	}
}
