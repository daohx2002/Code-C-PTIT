#include<stdio.h>
int main(){
	int test, a[200], dem=0,max = 0;;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			if(a[i] >= max){
				max = a[i];
				dem++;
			}
		}
		printf("%d\n", dem);
		dem=0;
		max = 0;
	}
}
