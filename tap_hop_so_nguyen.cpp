#include<stdio.h>
int main(){
	int n, m;
	int a[105], b[105], dem=0, doi[1000], doi1[1000], doi2[1000];
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int j=0; j<m; j++){
		scanf("%d", &b[j]);
	}
	int k=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i] == b[j]){
				doi[k] = a[i];
				k++;
			}
		}
	}
	for(int i=0; i<k-1; i++){
		for(int j=i; j<k; j++){
			if(doi[i] > doi[j]){
				int tmp = doi[i];
				doi[i] = doi[j];
				doi[j] = tmp;
			}
		}
	}
	for(int i=0; i<k; i++){
		printf("%d ", doi[i]);
	}
	printf("\n");
	k=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i] != b[j]){
				dem++;
			}
		}
		if(dem==m){
			doi1[k] = a[i]; 
			k++;
		}
		dem=0;
	}
	for(int i=0; i<k-1; i++){
		for(int j=i; j<k; j++){
			if(doi1[i] > doi1[j]){
				int tmp = doi1[i];
				doi1[i] = doi1[j];
				doi1[j] = tmp;
			}
		}
	}
	for(int i=0; i<k; i++){
		printf("%d ", doi1[i]);
	}
	printf("\n");
	k=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(b[i] != a[j]){
				dem++;
			}
		}
		if(dem==n){
			doi2[k] = b[i]; 
			k++;
		}
		dem=0;
	}
	for(int i=0; i<k-1; i++){
		for(int j=i; j<k; j++){
			if(doi2[i] > doi2[j]){
				int tmp = doi2[i];
				doi2[i] = doi2[j];
				doi2[j] = tmp;
			}
		}
	}
	for(int i=0; i<k; i++){
		printf("%d ", doi2[i]);
	}
}
