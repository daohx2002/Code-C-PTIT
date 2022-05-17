#include<stdio.h>
int main(){
	int n, count=0;
	scanf("%d", &n);
	int a[100] = {0 ,1};
	printf("0 1 ");
	for(int i=2; i<n; i++){
		a[i] = a[i-1] + a[i-2];
		printf("%d ", a[i]);
		}
	return 0;
}
