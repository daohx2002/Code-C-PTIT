#include<stdio.h>
int main(){
	int n, a[100][100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int c[1000], k=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			c[k] = a[i][j];
			k++;
		}
	}
	for(int i=0; i<k-1; i++){
		for(int j=i+1; j<k; j++){
			if(c[i] > c[j]){
				int tmp = c[i];
				c[i] = c[j];
				c[j] = tmp;
			}
		}
	}
	int d=0, l=0;
	int hang=n-1, cot=n-1;
	int dem=1;
	while(d<=n/2){
		for(int i=d; i<=cot; i++){
			a[d][i] = c[l];
			l++;
			dem++;
		}
		for(int i=d+1; i<=hang; i++){
			a[i][cot] = c[l];
			l++;
			dem++;
		}
		for(int i=cot-1; i>=d; i--){
			a[hang][i] = c[l];
			l++;
			dem++;
		}
		for(int i=hang-1; i>=d+1; i--){
			a[i][d] = c[l];
			l++;
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
