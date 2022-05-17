#include<stdio.h>
int sohoanhao1(int a, int b){
	for(int i = a; i <= b; i++){
		int tong = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0){
				tong = tong + j;
			}
		}
		if(i == tong){
			printf("%d ", i);
			tong = 0;
		}
	}
}
int sohoanhao2(int a, int b){
	for(int i = b; i <= a; i++){
		int tong = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0){
				tong = tong + j;
			}
		}
		if(i == tong){
			printf("%d ", i);
			tong = 0;
		}
	}
}
int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	if(x < y){
		sohoanhao1(x, y);
	}
	else{
		sohoanhao2(x, y);
	}
	return 0;
}
