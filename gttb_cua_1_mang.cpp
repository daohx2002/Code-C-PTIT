#include<stdio.h>
int main(){
	long long n, a[100], sum=0;
	scanf("%lld", &n);
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i=0; i<n; i++){
		sum += a[i];
	}
	float c = (float)sum/n;
	printf("%.3f", c);
	return 0;
}
