#include<stdio.h>
int main(){
	int test;
	long long a[100];
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		int m = 1, p = 1;
		for(int i=1; i<=n; i++){
			m = m * 10;
			p = m / 10;
		}
		for(int i=p; i<=m; i++){
			int tmp=0, so = i, sum=0;
			while(so){
				if(so % 10 == 4) break;
				else{
					sum += so % 10;
					tmp = tmp * 10 + so % 10;
				}
				so = so / 10;
			}
			if(i == tmp && sum%10==0){
				printf("%d ", tmp);
			}
			sum=0;
			tmp=0;
		}
		printf("\n");
	}
	return 0;
}
