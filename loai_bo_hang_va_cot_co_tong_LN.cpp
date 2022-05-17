#include<stdio.h>
int main(){
	int test, dem=1;
	scanf("%d", &test);
	while(test--){
		int n, m, a[100][100];
		scanf("%d%d", &n, &m);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", dem);
		int max = 0, sum =0, hang;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				sum += a[i][j];
			}
			if(sum > max){
				max = sum;
				hang = i;
			}
			sum=0;
		}
		int sim=0, max1=0, cot;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(j!=hang){
					sim += a[j][i];
				}
			}
			if(sim > max1){
				max1 = sim;
				cot = i;
			}
			sim=0;
		}
		for(int i=0; i<n; i++){
			if(i!=hang){
				for(int j=0; j<m; j++){
					if(j!=cot) printf("%d ", a[i][j]);
				}
				printf("\n");
			}
		}
		dem++;
//		printf("%d %d", hang, cot);
	}
}
