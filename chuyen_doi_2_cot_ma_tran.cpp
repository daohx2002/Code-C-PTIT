#include<stdio.h>
int main(){
	int m, n, c, d;
	int a[100][100];
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d%d", &c, &d);
	int tmp;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(j==c-1){
				tmp = a[i][c-1];
				a[i][c-1] = a[i][d-1];
				a[i][d-1] = tmp;
			}
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
