#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i+j<=n-2) printf("~");
		}
		for(int j=1; j<=2*i+1; j+=2){
			printf("%d", j);
		}
		for(int j=2*i-1; j>=1; j-=2){
			printf("%d", j);
		}
	printf("\n");
	}
	return 0;
}
