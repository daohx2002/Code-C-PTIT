#include<stdio.h>
int main(){
	int n, sum=0, tong=0, a[100], j=0;
	scanf("%d", &n);
	int c=n;
	while(c){
		tong += c%10;
		c/=10;
	}
	for(int i=2; i<=n; i++){
		while(n % i == 0){
			if(i>=11){
				a[j] = i;
				j++;
			}
			else sum+=i;
			n = n / i;
			}
		}
	if(j>=0){
		for(int i=0; i<j; i++){
			while(a[i]){
				sum += a[i] % 10;
				a[i] /= 10;
			}
		}
	}
	if(tong == sum) printf("YES");
	else printf("NO");
	return 0;
}
