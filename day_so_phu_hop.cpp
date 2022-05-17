#include<stdio.h>
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, a[1000], b[1000], dem=0;
		scanf("%d",&n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			scanf("%d", &b[i]);
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i] >= a[j]){
					int tmp= a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(b[i] >= b[j]){
					int tmp= b[i];
					b[i] = b[j];
					b[j] = tmp;
				}
			}
		}
		for(int i=0; i<n; i++){
			if(a[i] <= b[i]) dem++;
		}
//		printf("%d", dem);
		if(dem==n) printf("YES\n");
		else printf("NO\n");
	}
}
