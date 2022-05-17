#include<stdio.h>
int main(){
	int n, m, p;
	int a[100][100], b[100][100], matran[100][100];
	scanf("%d%d%d", &n, &m, &p);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			matran[i][j] = 0;
			for(int k=0; k<m; k++){
				matran[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			printf("%d ", matran[i][j]);
		}
		printf("\n");
	}
}
