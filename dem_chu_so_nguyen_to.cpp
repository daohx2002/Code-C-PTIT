#include<stdio.h>
int main(){
	long long n; 
	int a[10]={};
	scanf("%lld", &n);
	while(n){
		int j = n % 10;
		if(j==2 || j==3 || j==5 || j==7){
			a[j]++;
		}
		n /= 10;
	}
	for(int i=2; i<=7; i++){
		if((i==2 || i==3 || i==5 || i==7) && a[i] > 0){
			printf("%d %d", i, a[i]);
			printf("\n");
		}
	}
}
