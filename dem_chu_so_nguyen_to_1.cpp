#include<stdio.h>
#include<math.h>
int ktnt(int n){
	if(n<2) return 0;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n % i == 0) return 0;
		}
	}
	return 1;
}
int main(){
	long long n;
	int a[100], b[10000], j=0;
	scanf("%lld", &n);
	while(n){
		int m = n % 10;
		if(ktnt(m) == 1){
			a[j] = m;
			b[a[j]]++;
			j++;
		}
		n /= 10;
	}
	for(int i=j; i>=0; i--){
		if(b[a[i]] >= 1){
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]] = 0;
		}
	}
	return 0;
}
