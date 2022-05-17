#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[100];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				int tmp;
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("%d ", a[0]);	
	for(int i=1; i<n; i++){
		if(a[0] != a[i]){
			printf("%d", a[i]);
			break;
		}
	}
	return 0;
}
