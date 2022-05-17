#include<stdio.h>
int gt(int n){
	int tan=1;
	for(int i=1; i<=n; i++){
		tan *= i;
	}
	return tan;
}
int main(){
	int n, k=1;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			int a = gt(i);
			int b = gt(j);
			int c = gt(i-j);
			printf("%d ", a/b/c);
		}
		printf("\n");
	}
}
