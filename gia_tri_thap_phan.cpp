#include<stdio.h>
int main(){
	int n;
	int a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		double b = (double)1/a[i];
		printf("%.15lf\n", b);
	}
	return 0;
}
