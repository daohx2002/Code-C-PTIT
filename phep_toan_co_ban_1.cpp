#include<stdio.h>
int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(b==0){
		printf("0");
	}
	else{
		double c = (double)a/b;
		printf("%lld ", a+b);
		printf("%lld ", a-b);
		printf("%lld ", a*b);
//		printf("%lld ", a/b);
		printf("%.2lf ", c);
		printf("%lld", a%b);
//		printf("%.2lf", c);
	}
	return 0;
}
