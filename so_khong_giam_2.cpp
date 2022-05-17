#include<stdio.h>
#include<math.h>
int kg(int n){
	int max = n % 10;
	n = n / 10;
	while(n){
		if(n % 10 > max){
			return 0;
		}
		max = n % 10;
		n /= 10;		
	}
	return 1;
}
int main(){
	int test, b;
	scanf("%d", &test);
	while(test--){
		long long n;
		scanf("%lld", &n);
		int a=1, b=1;
		for(int i=1;i<=n;i++)
			a=a*10;
			b=a/10;
		for(int i=b;i<a;i++){
			if(kg(i) == 1){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}
