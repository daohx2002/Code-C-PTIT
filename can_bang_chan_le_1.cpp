#include<stdio.h>
#include<math.h>
int kt(int n){
	int dem=0;
	while(n>0){
		if((n % 10) % 2 == 0) dem++;
		else dem--;
		n = n / 10;
	}
	if(dem==0) return 1;	
	else return 0;
}
int main(){
	int a=1, b=1, n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		a = a * 10;
		b = a / 10;
	}
	int dem=0;
	for(int i=b; i<a; i++){
		if(kt(i) == 1){
			printf("%d ", i);
			dem++;
			if(dem==10){
				printf("\n");
				dem=0;
			}
		}
	}
	return 0;
}
