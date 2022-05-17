#include<stdio.h>
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		int n, dem=0;
		scanf("%d", &n);
		for(int i=9; i>=0; i--){
			while(n >= a[i] && n > 0){
				n = n - a[i];
				dem++;
			}
			if(n==0) break;
		}
		printf("%d\n", dem);
	}
}
