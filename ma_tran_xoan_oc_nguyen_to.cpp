#include<stdio.h>
#include<math.h>
int ktnt(int n){
	if(n<2) return 0;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int main(){
	int test, k=1;
	scanf("%d", &test);
	while(test--){
		int n, a[100][100], b[100];
		scanf("%d", &n);
		int d=0;
		int hang=n-1, cot=n-1;
		int dem=0, j=0;
		for(int i=2; i<=10000; i++){
			if(ktnt(i) == 1){
				b[j] = i;
				j++;
	 		}
		}
		while(d<=n/2){
			for(int i=d; i<=cot; i++){
				a[d][i] = b[dem];
				dem++;
			}
			for(int i=d+1; i<=hang; i++){
				a[i][cot] = b[dem];
				dem++;
			}
			for(int i=cot-1; i>=d; i--){
				a[hang][i] = b[dem];
				dem++;
			}
			for(int i=hang-1; i>=d+1; i--){
				a[i][d] = b[dem];
				dem++;
			}
			d++;
			hang--;
			cot--;
		}
		printf("Test %d:\n", k);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		k++;
	}
}
