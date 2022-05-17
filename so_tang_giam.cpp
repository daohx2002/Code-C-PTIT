#include<stdio.h>
#include<math.h>
int ktnt(int n){
	if(n < 2) return 0;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n % i == 0) return 0;
		}
	}
	return 1;
}
int kg(int n){
	int max = n % 10;
	n = n / 10;
	while(n){
		if(n % 10 <= max){
			return 0;
		}
		max = n % 10;
		n /= 10;		
	}
	return 1;
}
int kt(int n){
	int max = n % 10;
	n = n / 10;
	while(n){
		if(n % 10 >= max){
			return 0;
		}
		max = n % 10;
		n /= 10;		
	}
	return 1;
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, dem=0;
		scanf("%d", &n);
		long long a=1, b=1;
		for(int i=1; i<=n; i++){
			a = a * 10;
			b = a / 10;
		}
		for(long long i=b; i<a; i++){
			if(kt(i) == 1 || kg(i) == 1){
				if(ktnt(i)==1)dem++;
			}
		}
		printf("%d\n", dem);
		dem=0;	
	}
}
