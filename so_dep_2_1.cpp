#include<stdio.h>
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int a;
		scanf("%d", &a);
		int m=1, n=1;
		for(int i=1; i<=a; i++){
			m = m * 10;
			n = m / 10;
		}
		int tmp=0, sum=0, dem=0;
		for(int i=n; i<m; i++){
			int c = i;
			while(c){
				sum += c % 10;
				tmp = tmp * 10 + c % 10;
				c /= 10;
			}
			if(sum % 10 == 0 && tmp == i)
				dem++;
			sum = 0, tmp=0;
		}
		printf("%d\n", dem);
	}
}
