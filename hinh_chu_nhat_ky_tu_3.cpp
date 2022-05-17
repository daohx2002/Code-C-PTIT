#include<stdio.h>
int main(){
	int n, m, dem=0;
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++){
		for(int j=64+i; j<=64+m-1;j++){
			printf("%c", j);
			dem++;
		}
		for(int j=dem; j<m; j++){
			printf("%c", 64+m-1);
		}
		printf("\n");
		dem=0;
	}
}
