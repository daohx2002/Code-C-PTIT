#include<stdio.h>
int main(){
	int n, count=0;
	scanf("%d", &n);
	while(n--){
		long long b;
		scanf("%lld", &b);
		long long x1=0, x2=1;
		while(x2 < b){
			long long tmp=x2;
			x2 = x1 + x2;
			x1 = tmp;
		}
		if(x2 == b || b == 0){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}
