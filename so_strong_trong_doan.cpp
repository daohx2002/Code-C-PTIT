#include<stdio.h>
#include<math.h>
int strong(int a){
	int tich = 1;
	for(int i=1; i<=a; i++){
		tich *= i;
	}
	return tich;
}
int main(){
	int a, b, tong = 0;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i=a; i<=b; i++){
			int c = i;
			while(c){
				tong += strong(c%10);
				c /= 10;
			}
			if(tong == i){
				printf("%d ", i);
			}
			tong=0;
		}
	}
	if(a > b){
		for(int i=b; i<=a; i++){
			int c = i;
			while(c){
				tong += strong(c%10);
				c /= 10;
			}
			if(tong == i){
				printf("%d ", i);
			}
			tong=0;
		}
	}
	return 0;
}
