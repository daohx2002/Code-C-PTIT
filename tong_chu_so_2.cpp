#include<stdio.h>
int main(){
	int n, b=0, c=0;
	int a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		while(a[i]){
			b += a[i] % 10;
			a[i] = a[i] / 10;
		}
		printf("%d\n", b);
		b = b-b;
	}
	return 0;
}
