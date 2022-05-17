#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(char j='@'; j<=2*i+'@'; j+=2){
			printf("%c", j);
		}
		for(char j='@'+2*i-2; j>='@'; j-=2){
			printf("%c", j);
		}
		printf("\n");
	}
	return 0;
}

