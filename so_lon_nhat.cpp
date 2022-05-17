#include<stdio.h>
int main(){
	int test , max, a[100], b[100];
	scanf("%d", &test);
	while(test--){
		int n, max = -1;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			if(a[i] > max){
				max = a[i];		
			}
		}
		printf("%d\n", max);
		for(int i=0; i<n; i++){
			if(a[i] == max){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}
