#include<stdio.h>
int USCLN(long long a, long long b){
	while(a != b){
		if(a > b) a = a - b;
		else b = b - a;
	}
		return a;
}
int BSCNN(long long a, long long b){
	long long c = (a*b) / USCLN(a,b);
	return c;
}
int main(){
	long long m, n;
	scanf("%lld%lld", &m, &n);
	printf("%lld\n%lld", USCLN(m,n), BSCNN(m,n));
	return 0;
}
