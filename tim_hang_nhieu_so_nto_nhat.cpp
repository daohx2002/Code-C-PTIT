#include<stdio.h>
#include<math.h>
int ktnt(int n){
	if(n<2) return 0;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n % i == 0) return 0;
		}
	}
	return 1;
}
int main(){
	int n, a[100][100], b[200];
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max = 0, dem=0, k;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(ktnt(a[i][j]) == 1) dem++;
		}
		if(dem > max){
			max = dem;
			k = i;
		}
		dem=0;
	}
	printf("%d\n", k);
	for(int i=k; i<=k; i++){
		for(int j=1; j<=n; j++){
			if(ktnt(a[i][j]) == 1){
				printf("%d ", a[i][j]);
			}
		}
	}
}
