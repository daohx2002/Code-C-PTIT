#include<stdio.h>
int main(){
	int n, test, a[100], b[10000], dem=1;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
			printf("Test %d:\n", dem);
		int kt=0;
		for(int i=0; i<n; i++){
			if(b[a[i]] >= 1){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
				kt=1;
			}
		}
		dem++;
	}
	return 0;
}
