#include<stdio.h>
#include<math.h>

long long uoc(long long n){
	long long max;
	while(n%2==0){
		n/=2;
		max=2;
	}
	for (long long i=3; i<=sqrt(n);i+=2){
		while (n%i==0){
			max=i;
			n/=i;
		}
	}
	if(n>1) max=n;
	return max;
}

int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",uoc(n));
	}
}
