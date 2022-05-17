#include<stdio.h>
int main(){
	int n, dem=0;
	long long a[2000];
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			if(i<j && a[i] > a[j]) dem++;
		}
	}
	printf("%d", dem);
}
