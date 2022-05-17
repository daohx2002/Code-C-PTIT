#include<stdio.h>
int main(){
	int n;
	long long a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i=0; i<n; i++){
		long long tmp=0, so = a[i], sum=0;
		while(a[i]){
			if((a[i] % 10) % 2 == 0) break;
			else{
				sum += a[i] % 10;
				tmp = tmp * 10 + a[i] % 10;
			}
			a[i] = a[i] / 10;
		}
		if(so == tmp && sum%2==1){
			printf("YES\n");
		}
		else printf("NO\n");
		sum=0;
	}
	return 0;
}
