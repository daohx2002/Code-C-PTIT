#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int m = n, x = i, dem=0;
		while(dem < i){
			printf("%d ", x);
			m--;
			x += m;
			dem++;
		}
		printf("\n");
	}
}
