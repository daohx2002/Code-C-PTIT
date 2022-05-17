#include<stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		long long a[100005], b[100005];
		scanf("%d",&n);
		for(int i=0; i<n; i++){
			scanf("%lld", &a[i]);
			b[a[i]]++;
		}
		for(int i=0; i<n; i++){
			if(b[a[i]] % 2 == 1){
				printf("%lld\n", a[i]);
				b[a[i]] = 0;
			}
			
		}
	}
}
