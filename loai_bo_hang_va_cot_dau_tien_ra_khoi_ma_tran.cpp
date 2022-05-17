#include<stdio.h>
int main(){
	int test, dem=1;
	scanf("%d", &test);
	while(test--){
		int m, n, a[100][100];
		scanf("%d%d", &m, &n);
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", dem);
		for(int i=1; i<m; i++){
			for(int j=1; j<n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		dem++;
	}
}
