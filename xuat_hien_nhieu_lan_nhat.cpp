#include<stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		long long a[100005], b[100005];
		scanf("%d",&n);
		int dem = n / 2;
		for(int i=0; i<n; i++){
			scanf("%lld", &a[i]);
			b[a[i]]++;
		}
		int min=1000000;
		for(int i=0; i<n; i++){
			if(b[a[i]] > dem){
				if(a[i] < min){
					min = a[i];
				}
			}
		}
		if(min != 1000000) printf("%lld\n", min);
		else printf("NO\n");
	}
}
