#include<stdio.h>
int main(){
	int m, n, p, q;
	int a[100][100], b[100][100], c[100][100];
	int mt1[100][100], mt2[100][100];
	scanf("%d%d%d%d", &m, &n, &p, &q);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=0; i<p; i++){
		for(int j=0; j<q; j++){
			scanf("%d", &c[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			mt1[i][j] = 0;
			for(int k=0; k<n; k++){
				mt1[i][j] += a[i][k] * b[k][j];	
			}
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<q; j++){
			mt2[i][j] = 0;
			for(int k=0; k<p; k++){
				mt2[i][j] += mt1[i][k] * c[k][j];	
			}
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			printf("%d ", mt2[i][j]);
		}
		printf("\n");
	}
}
