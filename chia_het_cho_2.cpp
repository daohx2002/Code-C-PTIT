#include<stdio.h>
int main(){
	int n, t=1;
	scanf("%d", &n);
	while(n--){
		long long a;
		int dem = 0;
		scanf("%lld", &a);
		for(long long i=2; i<=a; i++){
			while(a % i == 0){
				if(i % 2 == 0){
					dem++;
				}
				a = a/i;
			}
			if(dem==0){
				continue;
			}
		}	
		printf("%d\n", dem);
		dem=0;
	}
	return 0;
}
