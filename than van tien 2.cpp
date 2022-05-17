#include<stdio.h>

int main(){
	long long n;
	long long s;
	long long sum=0;
	long long a[100];
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		while(a[i]){
			sum+=a[i]%10;
			a[i]=a[i]/10;
}
		if(sum%10==0){
		
			printf("YES\n");}
			else{
			printf("NO\n");}
			sum=0;
}
	return 0;
}
