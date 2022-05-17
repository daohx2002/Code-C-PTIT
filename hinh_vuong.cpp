#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a = 0;
	int b = 2*n-2;
	int c = n;
	for(int i=0; i<2*n-1; i++){
		for(int j=0; j<2*n-1; j++){
			if(i==0 || j==0 || i==2*n-2 || j==2*n-2){
				printf("%d", n);
			}
			else{
				if(i==a || j==a || i==b || j==b){
				printf("%d", c);
				}
			}
			a++; b--; c--;
		}
		printf("\n");
	}
}
