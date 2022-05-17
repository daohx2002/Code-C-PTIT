#include<stdio.h>
int main(){
	int test, b=0;
	scanf("%d", &test);
	while(test--){
		long long n;
		scanf("%lld", &n);
		while(n){
			int a = n % 10;
			if(a % 2 == 0) b++;
			else b=0;
			n /= 10;
		}
		if(b != 0) printf("YES\n");
		else printf("NO\n");
		b=0;
	}
}
