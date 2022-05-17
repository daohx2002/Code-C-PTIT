#include<stdio.h>
#include<math.h>
int main(){
	int n;
	long long sum=0;
	scanf("%d", &n);
	while(n--){
		int a;
		scanf("%d", &a);
		for(int i=2; i<=a; i++){
			while(a % i == 0){
				sum += i;
				a = a/i;
			}
		}
	}
	printf("%lld", sum);
	return 0;
}
