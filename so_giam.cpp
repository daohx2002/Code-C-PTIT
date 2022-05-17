#include<stdio.h>
#include<math.h>
int kg(int n){
	int max = n % 10;
	n = n / 10;
	while(n){
		if(n % 10 <= max){
			return 0;
		}
		max = n % 10;
		n /= 10;		
	}
	return 1;
}
int main(){
	int test, dem=0;
	scanf("%d", &test);
	while(test--){
		int a, b;
		scanf("%d%d", &a, &b);
		for(int i=a;i<=b;i++){
			if(kg(i) == 1){
				dem++;
			}
		}
		printf("%d\n", dem);
		dem=0;
	}
}
