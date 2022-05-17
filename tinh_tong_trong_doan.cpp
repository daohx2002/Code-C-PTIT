#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int d = abs(b-a);
	long long c = (b+a)*(d+1)/2;
	printf("%lld", c);
	return 0;
}
