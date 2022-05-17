#include<stdio.h>
int main(){
	int n, m, k, p=0;
	scanf("%d%d", &n, &m);
	if(n >= m) k=n;
	else k=m;
	for(int i=k; i>=1; i--){
		if(i <= n){
			int dem=0;
			for(int j=i; j>=1; j--){
				printf("%d", j);
				dem++;
				if(dem>=m) break;
			}
			int j=2;
			while(dem<m){
				printf("%d", j);
				j++;
				dem++;
			}
			p++;
			if(p==n) return 0;
		}
		else{
			int dem=0;
			for(int j=i; j>=1; j--){
				printf("%d", j);
				dem++;
			}
			int j=2;
			while(dem<m){
				printf("%d", j);
				dem++;
				j++;
			}
			p++;
			if(p==n) return 0;
		}
		printf("\n");
	}
}
