#include<stdio.h>
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, tong=1, sum=1;
		scanf("%d", &n);
		int a[100], b[100];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			if(a[i] != 0 && a[i] != 1){
				tong = 0;
			}
		}
		for(int j=0; j<n; j++){
			scanf("%d", &b[j]);
			if(b[j] != 0 && b[j] != 1){
				sum = 0;
			}
		}
		if(tong == 0 || sum == 0){
			printf("NO\n");
			printf("0");
		}
		else{
			printf("YES\n");
			for(int i=0; i<n; i++){
				for(int j=i; j<=i; j++){
					if(a[i] + b[j] == 2 || a[i] + b[j] == 0){
						printf("0 ");
					}
					else if(a[i] + b[j] == 1){
						printf("1 ");
					}
				}
			}
		}
		printf("\n");
	}
}
