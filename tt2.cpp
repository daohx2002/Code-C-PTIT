#include<stdio.h>
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		int a[200];
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		int dem=0;
		for(int i=0; i<n/2; i++){
			if(a[i] == a[n-i-1]){
				dem++;
			}
		}
		if(dem == (n/2)) printf("YES\n");
		else printf("NO\n");
	}
}
