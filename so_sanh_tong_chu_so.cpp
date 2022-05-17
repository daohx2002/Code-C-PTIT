#include<stdio.h>
int main(){
	int a, b; 
	int c = 0, d = 0;
	scanf("%d%d", &a, &b);
	int m = a, n = b;
	while(a){
		c += a % 10;
		a = a / 10;
	}
	while(b){
		d += b % 10;
		b = b / 10;
	}
	if(c <= d) printf("%d %d", m, n);
	else printf("%d %d", n, m);
	return 0;
}
