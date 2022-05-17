#include<stdio.h>
int main(){
	int n;
	long long a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i=0; i<n; i++){
		long long tmp=0, so = a[i];
		while(a[i]){
			tmp = tmp * 10 + a[i] % 10;
			a[i] = a[i] / 10;
		}
		if(so == tmp){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}
