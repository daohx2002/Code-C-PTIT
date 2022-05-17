#include<stdio.h>
int main(){
	int test, dem=0;
	long long a[100];
	scanf("%d", &test);
	while(test--){
		long long n;
		scanf("%lld", &n);
		long long c = n;
		while(c){
			if(c % 2 == 0) dem++;
			else{
				dem--;
			}
			c = c / 10;
			}
			if(dem<0){
				printf("YES\n");
			}
			else printf("NO\n");
			dem=0;
		}
	return 0;
}
