#include<stdio.h>
int main(){
	int n;
	int a=0;
	scanf("%d", &n);
	while(n < 0){      	
		a += n % 10;
		n = n / 10;
	}
	printf("%d", a);
	return 0;
}

/*
n = 1234
 a = 4 + 3 + 2 + 1
n = 123 12 1

*/
