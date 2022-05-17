#include<stdio.h>
int main(){
	int test, a[100];
	scanf("%d", &test);
	while(test--){
		int n;
		int  b[30000]={};
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		int max=0;
		for(int i=0; i<=30000; i++){
			if(b[i] > max){
				max = b[i];
			}
		}
		for(int i=0; i<n; i++){
			if(b[a[i]] == max){
				printf("%d ", a[i]);
				b[a[i]] = 0;
			}
		}
		printf("\n");
		max=0;
	}
}
