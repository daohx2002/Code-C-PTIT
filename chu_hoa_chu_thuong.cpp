#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	while(n){
		char a;
		scanf(" %c", &a);
		if(a >= 'A' && a <= 'Z'){
			printf("%c\n", a+32);
		}
		else{
			printf("%c\n", a-32);
		}
		n--;
	}
	return 0;
}
