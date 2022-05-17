#include<stdio.h>
int USCNN(long long a, long long b){
	if(b==0) return a;
	return USCNN(b, a % b);
}
int BSCNN(long long a, long long b){
	return a*b / (USCNN(a,b));
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		long long a, b;
		scanf("%lld%lld", &a, &b);
		printf("%lld %lld", BSCNN(a,b), USCNN(a,b));
	}
	return 0;
}
