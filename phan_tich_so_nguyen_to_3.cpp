#include<stdio.h>
int main(){
	int n, t=1;
	scanf("%d", &n);
	while(n--){
		int a, dem = 0;
		scanf("%d", &a);
		printf("Test %d: ", t);
		for(int i=2; i<=a; i++){
			while(a % i == 0){
				dem++;
				a = a/i;
			}
			if(dem==0){
				continue;
			}
			printf("%d(%d) ", i, dem);
			dem=0;
		}
		printf("\n");
		t++;
	}
	return 0;
}
