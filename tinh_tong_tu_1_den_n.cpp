#include<stdio.h>
int main(){
	int n;
	long long a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i=0; i<n; i++){
		printf("%lld\n", a[i]*(a[i]+1)/2);
	}
	return 0;
}
