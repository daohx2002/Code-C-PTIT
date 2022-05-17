#include<stdio.h>
int main(){
	int n, m, dem=0;
	scanf("%d%d", &n, &m);
	if(n <= m){
		for(int i=0; i<n; i++){
			for(int j=65+i; j<=65+m-1;j++){
				printf("%c", j);
			}
			for(int j=65+i-1; j>=65; j--){
				printf("%c", j);
			}
			printf("\n");
		}
	}
	else{
		for(int i=0; i<n; i++){
			for(int j=65+i; j<=65+m-1;j++){
				printf("%c", j);
			}
			if(i<=m){
				for(int j=65+i-1; j>=65; j--){
					printf("%c", j);
				}
			}
			else{
				dem++;
				for(int j=65+i-1-dem; j>=65; j--){
					printf("%c", j);
				}
			}
			printf("\n");
		}
	}
}
