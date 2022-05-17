#include<stdio.h>
int main(){
	int n, a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int sum=0;
	for(int i=0; i<n; i++){
		sum += a[i];
	}
	float tb = (float)sum/n;
	printf("%.3f", tb);
	return 0;
}
