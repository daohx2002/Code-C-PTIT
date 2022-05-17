#include<stdio.h>
int main(){
	int test, dem=1;
	scanf("%d", &test);
	while(test--){
		int n, a[100],b[100], k=1, max = 1;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		printf("Test %d:\n", dem);
		for(int i=0; i<n-1; i++){
			if(a[i+1] <= a[i]){
				if(k >= max){
					max = k;
		   			k=1;
		   		}
			}
			else k++;
		}
		k=1;
		printf("%d\n", max);
		for(int i=0; i<n; i++){
			a[n] = -1;
				if(a[i+1] > a[i]){
					k++;
				}
				else{
					if(k == max){
						for(int j=i+1-max; j<=i;j++){
							printf("%d ", a[j]);
						}
				   		printf("\n");
				   		k=1;
				   	}
				else k=1;
				}
			}
			dem++;
		}
	}
