#include<stdio.h>
int main(){
	int n, count=0;
	long long b[102];
	scanf("%d", &n);
	long long a[10000] = {0,1};
	while(n--){
		long long b;
		scanf("%lld", &b);
		for(long long j=2; j<10000; j++){
			a[j] = a[j-1] + a[j-2];
			if(b == a[j]){
				count ++;
			}
		}
		if(count == 1 || b==0) printf("YES\n");
		else printf("NO\n");
		count = 0;
	}
	return 0;
}
