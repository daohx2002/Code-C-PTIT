#include<stdio.h>
#include<math.h>
int strong(int a){
	int sum = 1;
	for(int i=1; i<=a; i++){
		sum *= i;
	}
	return sum;
}
int main(){
	int n, tong = 0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int c = i;
		while(c){
			tong += strong(c%10);
			c /= 10;
		}
		if(tong == i){
			printf("%d ", i);
		}
		tong = 0;
	}
	return 0;
}


