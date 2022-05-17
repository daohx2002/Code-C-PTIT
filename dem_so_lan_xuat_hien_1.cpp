#include<stdio.h>
int main(){
	int n, a[100], b[10000];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	int kt=0;
	for(int i=0; i<n; i++){
		if(b[a[i]] >= 1){
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]] = 0;
			kt=1;
		}
	}
	if(kt==0){
		printf("0");
	}
	return 0;
}
