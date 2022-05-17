#include <stdio.h> 
long long ss(long long  a,long long  b) {
	if(a>=b) return a;
	else return b; 
}
int main () {
	int m; 
	scanf("%d",&m);
	while(m--) {
	int n;
	scanf("%d",&n);
	long long a[100001];
	for(int i=0;i<n;i++) {
		scanf("%lld",&a[i]);
	}
	long long  max=-9999999,s=0;
	for(long  i=0;i<n;i++) {
		s=ss(a[i],s+a[i]); 
		max=ss(max,s); }
	printf("%lld\n",max);
}
return 0;
}
