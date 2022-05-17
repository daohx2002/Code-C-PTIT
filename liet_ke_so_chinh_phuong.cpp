#include<stdio.h>
#include<math.h>
int main(){
	int m , n, a, b;
	long long count=0;
	scanf("%d%d", &m, &n);
	a = sqrt(m);
	b = sqrt(n);
	for(int i=a; i<=b; i++){
		if(i*i>=m && i*i<=n){
			count++;
		}
	}
	printf("%lld\n", count);
	for(int i=a; i<=b; i++){
		if(i*i>=m && i*i<=n){
			printf("%d\n", i*i);
		}
	}
	return 0;
}
