#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n>365){
		int a = n/365;
		int b = (n - (a*365))/7;
		int c = n- a*365 - b*7;
		printf("%d %d %d", a, b, c);
	}
	else{
		int a = 0;
		int b = n/7;
		int c = n - b*7;
		printf("%d %d %d", a, b, c);
	}
	return 0;
}
