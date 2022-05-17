#include<stdio.h>
int main(){
	int n;
	int a=0;
	scanf("%d", &n);
	while(n){
		if(n != 0) a++;
		n = n / 10;
	}
	printf("%d", a);
	return 0;
}
