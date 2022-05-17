#include<stdio.h>
int main(){
	int n;
	int a=0, b=0;
	scanf("%d", &n);
	while(n){
		int c = n % 10;
		if(c % 2 != 0) a++;
		else b++;
		n = n/10;
	}
	printf("%d %d", a, b);
	return 0;
}
