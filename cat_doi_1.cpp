#include<stdio.h>
void kt(){
	int a[10] = {0,1,2,2,2,2,2,2,0,0};
	int dem=0;
	int b[100];
	long long n;
	scanf("%lld", &n);
	while(n){
		if(a[n%10] == 2){
			printf("INVALID\n"); 
			return;
		}
		else{
			b[dem] = a[n%10];
			dem++;
		}
		n /= 10;
	}
	int d=0;
	for(int i=dem-1; i>=0; i--){
		if(b[i] == 0 && d>0){
			printf("%d", b[i]);
		}
		if(b[i] > 0){
			printf("%d", b[i]);
			d++;
		} 
	}
	if(d==0) printf("INVALID");
	printf("\n");
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		kt();
	}
	return 0;
}
