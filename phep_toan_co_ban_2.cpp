#include<stdio.h>
#include<math.h>
int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	double d = (double)a/b;
//	float c = a/b;
	printf("%lld\n", a+b);
	printf("%lld\n", a-b);
	printf("%lld\n", a*b);
	printf("%lld\n", a/b);
	printf("%lld\n", a%b);
	printf("%.2lf", d);
	return 0;
}
