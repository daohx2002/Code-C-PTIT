#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	long long a=1;
	long long sum=0;
	for(int i=1; i<=n; i++){
		a*=i;
		sum+=a;
	}
	printf("%lld", sum);
	return 0;
}
