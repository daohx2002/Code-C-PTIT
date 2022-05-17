#include<stdio.h>
int main(){
	int n, a[100][100];
	scanf("%d", &n);
	int d=0;
	int hang=n-1, cot=n-1;
	int dem=0;
	int b[1000] = {0,1};
	for(int i=2; i<1000; i++){
		b[i] = b[i-1] + b[i-2];
	}
	while(d<=n/2){
		for(int i=d; i<=cot; i++){
			a[d][i] = b[dem];
			dem++;
		}
		for(int i=d+1; i<=hang; i++){
			a[i][cot] = b[dem];
			dem++;
		}
		for(int i=cot-1; i>=d; i--){
			a[hang][i] = b[dem];
			dem++;
		}
		for(int i=hang-1; i>=d+1; i--){
			a[i][d] = b[dem];
			dem++;
		}
		d++;
		hang--;
		cot--;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
