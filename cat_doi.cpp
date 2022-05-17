#include<stdio.h>
int main(){
	int test, a[100];
	long long tmp=0;
	scanf("%d", &test);
	while(test--){
		long long n;
		int j=0;
		scanf("%lld", &n);
		int kt=0;
		while(n){
			int m = n % 10;
			a[j] = m;
			if(a[j] != 0 && a[j] != 1 && a[j] != 8 && a[j] != 9){
				printf("INVALID");
				j=0;
				break;
			
			}
			j++;
			n /= 10;
		}
		for(int i=j; i>=0; i--){
			if(a[i] == 0) a[i] = 0;
			if(a[i] == 1) a[i] = 1;
			if(a[i] == 8) a[i] = 0;
			if(a[i] == 9) a[i] = 0;
			tmp = tmp*10 + a[i];
		}
		if(tmp==0){
			printf("INVALID\n");
		}
		else
			printf("%lld\n", tmp);
		tmp=0;
	}
}
