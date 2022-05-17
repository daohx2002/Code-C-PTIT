#include<stdio.h>
int main(){
	int n;
	int a[100], b[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[a[i]] ++;
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(b[a[i]] >= 1){
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	}
}
