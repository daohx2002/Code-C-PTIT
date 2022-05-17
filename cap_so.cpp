#include<stdio.h>
int USCLN(long long a, long long b){
	if(b==0) return a;
	return USCLN(b, a%b);
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		long long a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		if(USCLN(a,b) == USCLN(c,d)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}
