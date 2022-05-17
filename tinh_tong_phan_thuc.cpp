#include<stdio.h>
int main(){
	int n;
	double tong=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		tong += (double)1/i;
	}
	printf("%.4lf", tong);
	return 0;
}
