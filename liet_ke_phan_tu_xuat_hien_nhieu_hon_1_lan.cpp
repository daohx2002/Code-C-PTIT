#include<stdio.h>
int main(){
	int n, dem=0, c[100], j=0, a[100], b[10000];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	int kt=0;
	for(int i=0; i<n; i++){
		if(b[a[i]] > 1){
			dem++;
			c[j] = a[i];
			j++;
			b[a[i]] = 1;
			kt=1;
		}
	}
	printf("%d\n", dem);
	for(int j=0; j<dem; j++){
		printf("%d ", c[j]);
	}
	if(kt==0){
		printf("0");
	}
	return 0;
}
