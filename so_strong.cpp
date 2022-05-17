#include<stdio.h>
int main(){
	int n, a, k=1, tong = 0;
	scanf("%d", &n);
	int c = n;
	while(n){
		a = n % 10;
		n = n / 10;
		for(int i=1; i<=a; i++){
			k *= i;
		}
		tong += k;
		k = 1;
	}
	if(c == tong) printf("1");
	else printf("0");
	return 0;
}
