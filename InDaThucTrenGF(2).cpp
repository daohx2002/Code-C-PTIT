#include<stdio.h>
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, a[100];
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		int dem=0;
		for(int i=0; i<n; i++){
			dem++;
			if(a[i] == 0){
				printf("1");
			}
			if(a[i] == 1){
				printf("x");
			}
			if(a[i] != 0 && a[i] != 1){
				printf("x^%d", a[i]);
			}
			if(dem < n){
				printf(" + ");
			}
		}
		printf("\n");
	}
}
