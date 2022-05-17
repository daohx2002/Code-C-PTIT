#include<stdio.h>
int main(){
	long long a , b ;
	scanf("%d%d", &a , &b);
	float c = (float)a/b;
	printf("%lld\n", a+b);
	printf("%lld\n", a-b);
	printf("%lld\n", a*b);
	printf("%lld\n", a/b);
	printf("%lld\n", a%b);
	printf("%.2f", c);
	return 0 ;
}
