#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a = 1, m = 1;
	for(int i=1; i<=n; i++){
		if(i % 2 == 1){
			int c = i;
			while(c--){
				printf("%d ", a);
				a++;
			}
		}
		else{
			int b = a + i -1;
			for(int j=b; j>=a; j--){
				printf("%d ", j);
			}
			a=b+1;
		}
		printf("\n");
	}
}
