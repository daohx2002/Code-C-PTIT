#include<stdio.h>
int main(){
	int n, a, b=1, c;
	scanf("%d", &n);
	while(n){
		a = n % 10;
		b = b * a;
		n = n / 10;	
	}
	printf("%d", b);
}
