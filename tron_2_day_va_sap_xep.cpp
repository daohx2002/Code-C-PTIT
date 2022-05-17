#include<stdio.h>
int main(){
	int test, dem=1;
	scanf("%d", &test);
	int a[30001], b[30001];
	while(test--){
		int n;
		scanf("%d", &n);
		for(int i=0; i<n*2; i+=2){
			scanf("%d", &a[i]);
		}
		for(int j=1; j<n*2; j+=2){
			scanf("%d", &b[j]);
		}
		printf("Test %d:\n", dem);
		for(int i=0; i<n*2-2; i+=2){
			for(int m=i+2; m<n*2; m+=2){
				if(a[i] >= a[m]){
					int tmp = a[i];
					a[i] = a[m];
					a[m] = tmp;
				}
			}
		}
		for(int j=1; j<n*2-1; j+=2){
			for(int k=j+2; k<n*2; k+=2){
				if(b[j] <= b[k]){
					int tmp = b[j];
					b[j] = b[k];
					b[k] = tmp;
				}
			}
		}
		for(int i=0; i<n*2; i+=2){
			for(int j=i+1; j<=i+1; j+=2){
				printf("%d %d ", a[i], b[j]);
			}
		}
		printf("\n");
		dem++;
	}
}
