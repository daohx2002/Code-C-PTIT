#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int b=0;
		for(int j=0; j<n; j++){
			if(j <= i) printf("0 ");
			else{
				b++;
				printf("%d ", b);
			}
		}
		printf("\n");
	}
}
