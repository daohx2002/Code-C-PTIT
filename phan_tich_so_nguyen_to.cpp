#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a;
		scanf("%d", &a);
		for(int i=2; i<=a; i++){
			while(a % i == 0){
				printf("%d ", i);
				a = a/i;
			}
		}
		printf("\n");
	}
	return 0;
}
