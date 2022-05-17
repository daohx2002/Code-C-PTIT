#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int c=0, a=0;
	scanf("%d", &n);
	int b = n % 10;
	while(n>9){
		n = n / 10;
	}
	printf("%d %d", n, b);
	return 0;
}
