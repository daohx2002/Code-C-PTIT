#include<stdio.h>
int main(){
	int test, a[100];
	scanf("%d", &test);
	while(test--){
		int b;
		scanf("%d", &b);
		for(int i=0; i<b; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<b; i++){
			if(a[i] % 2 == 0)
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
