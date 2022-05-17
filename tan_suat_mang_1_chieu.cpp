#include<stdio.h>
int main(){
	int m;
	scanf("%d", &m);
	int a[10000], b[10000], dem[10000], dem1[10000];
	for(int i=0; i<m; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	int k=0;
	for(int i=0; i<m; i++){
		if(b[a[i]] >= 1){
			dem[k] = b[a[i]];
			dem1[k] = b[a[i]];
			k++;
			b[a[i]] = 0;
		}
	}
	for(int i=0; i<k-1; i++){
		for(int j=i+1; j<k; j++){
			if(dem[i] > dem[j]){
				int tmp = dem[i];
				dem[i] = dem[j];
				dem[j] = tmp;
				int mtp = a[i];
				a[i] = a[j];
				a[j] = mtp;
			}
		}
	}
	for(int i=0; i<k ;i ++){
		if(dem1[i] >= 1){
			printf("%d ", a[i]);
			dem[i] = 0;
		}
	}
	printf("\n");
	for(int i=0; i<k ;i ++){
		printf("%d ", dem[i]);
	}
}
