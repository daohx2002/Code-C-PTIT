#include<stdio.h>
int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[100][100], b[10000], dem[10000], dem1[10000];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	} 
	int k=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			b[k] = a[i][j];
			k++;
		}
	} 
	for(int i=0; i<k-1; i++){
		for(int j=i+1; j<k; j++){
			if(b[i] > b[j]){
				int tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	for(int i=0; i<k; i++){
		dem[b[i]]++;
		dem1[b[i]]++;
	}
	for(int i=0; i<k; i++){
		if(dem[b[i]] >= 1){
			printf("%d ", b[i]);
			dem[b[i]] = 0;
		}
	}
	printf("\n");
	for(int i=0; i<k; i++){
		if(dem1[b[i]] >= 1){
			printf("%d ", dem1[b[i]]);
			dem1[b[i]] = 0;
		}
	}
}
