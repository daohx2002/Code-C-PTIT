#include<stdio.h>
#include<math.h>
int nt(int a){
	if(a < 2) return 0;
	if(a >= 2){
		for(int i = 2; i <= sqrt(a); i++){
			if(a % i == 0)
			return 0;
		}
	}
	return 1;
}
int main(){
	int n, sum=0, dem=0;
	scanf("%d", &n);
	for(int i=2; i<=n; i++){
		int c = i;
		if(nt(c)==1){
			while(c){
				sum += c % 10;
				c /= 10;
			}
			if(sum % 5 == 0){
				printf("%d ", i);
				dem ++;
			}
		}
		sum=0;
	}
	printf("\n%d", dem);
}
