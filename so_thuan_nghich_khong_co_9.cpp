#include<stdio.h>
int main(){
	int n, tmp=0, dem=0;
	scanf("%d", &n);
	for(int i=2; i<n; i++){
		int c = i;
		while(c){
			if(c%10==9){
				break;
			}
			tmp = tmp*10 + c%10;
			c /= 10;
		}
		if(tmp == i){
			printf("%d ", i);
			dem++;
		}
		tmp=0;
	}
	printf("\n%d", dem);
	return 0;
}
