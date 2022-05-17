
#include<stdio.h>
int main(){
	int n, a[100][100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				int tmp;
				tmp = a[i][j];
				a[i][j] = a[i][n-j-1];
				a[i][n-j-1] = tmp;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

