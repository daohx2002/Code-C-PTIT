#include<stdio.h>
int main(){
	int n, t=1;
	scanf("%d", &n);
	while(n--){
		int a, dem = 0, j=0, b[100];
		scanf("%d", &a);
		for(int i=2; i<=a; i++){
			while(a % i == 0){
				dem++;
				a = a/i;
			}
			if(dem==0){
				continue;
			}
			b[j] = i;
			j++;
			dem=0;
		}
		int tich = 1;
		for(int i=0; i<j; i++){
			tich *= b[i];
		}
		printf("%d", tich);
		printf("\n");
	}
	return 0;
}
