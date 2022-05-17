#include<stdio.h>
int main(){
	int a, b, m, x;
	scanf("%d%d", &a, &b);
	for(int i=1; i<=a; i++){
		if(i <= b){
			for(int j=i; j<=b; j++){
				printf("%d", j);
				x = j;
			}
			for(int j=x-1; j>=x-i+1; j--){
				printf("%d", j);
				m = i-1;
			}
			printf("\n");
		}
		else{
			printf("%d", i);
			for(int j=i-1; j>=i-b+1; j--){
				printf("%d", j);
			}
			printf("\n");
		}
	}
	return 0;
}
