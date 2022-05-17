#include<stdio.h>
int main(){
	long long a, k, n;
	int dem=0;
	scanf("%lld%lld%lld", &a, &k, &n);
	for(long long i=k-(a%k); i<=n-a; i+=k){
		printf("%lld ", i);
		dem++;
	}
	if(dem==0) printf("-1");
}

