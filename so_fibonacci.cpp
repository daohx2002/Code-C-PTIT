#include<stdio.h>
int main(){
	int test;
	long long max;
	long long a[100]={0, 1};
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		for(int i=2; i<=n; i++){
			a[i] = a[i-1] + a[i-2];
			max = a[i];
		}
		printf("%lld\n", max);
	}
	return 0;
}
