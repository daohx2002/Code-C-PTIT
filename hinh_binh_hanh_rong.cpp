#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n+n-i-1; j++){
			if(i+j<n-1) printf("~");
			else{
				if(i+j==n-1 || i+j==n*2-2 || i==0 || i==n-1) printf("*");
				else printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
