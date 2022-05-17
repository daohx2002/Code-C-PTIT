#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int m = n, dem=0;
		char x = i + 64;
		while(dem < i){
			printf("%c ", x);
			m--;
			x += m;
			dem++;
		}
		printf("\n");
	}
}
