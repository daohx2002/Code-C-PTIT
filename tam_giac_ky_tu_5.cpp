#include<stdio.h>
int main(){
	int n, dem=0;
	scanf("%d", &n);
	char max = '@' + (n-1)*2; 
	for(int i=0; i<n; i++){
		for(char j=max-dem-(n-1); j<=max-2*i; j++){
			printf("%c", j);
		}
		dem++;
		printf("\n");
	}
}
