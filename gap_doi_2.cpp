#include<stdio.h>
int main(){
	int n;
	int a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		printf("%d\n", a[i]*2);
	}
	return 0;
}
