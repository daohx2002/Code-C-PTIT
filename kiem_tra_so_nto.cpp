#include<stdio.h>
#include<math.h>
#include<string.h>
int ktnt(int a){
	if(a<2) return 0;
	else{
		for(int i=2; i<=sqrt(a); i++){
			if(a % i == 0) return 0;
		}
	}
	return 1;
}
int main(){
	int m, n, a[100][100];
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(ktnt(a[i][j]) == 1){
				a[i][j] = 1;
			}
			else a[i][j] = 0;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
