#include<stdio.h>
#include<math.h>
int main(){
	int n, t=1;
	scanf("%d", &n);
	while(n--){
		long long a;
		int dem = 0;
		scanf("%lld", &a);
		for(long long i=1; i<=sqrt(a); i++){
			if(a % i == 0){
				if(i % 2 == 0){
					dem++;
				}
				if((a/i)%2==0 && i*i != a){
					dem++;
				}
			}
		}
			printf("%d\n", dem);
		dem=0;	
	}
	return 0;
}
