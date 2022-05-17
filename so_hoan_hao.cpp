#include<stdio.h>
int main(){
	int n;
	int b =0;
	scanf("%d", &n);
	for(int i=1; i<n; i++){
		if(n % i == 0)
		b += i;
	}
	if(b == n) printf("1");
	else printf("0");
	return 0;
}
