#include<stdio.h>
int UCLN(int a, int b){
	while(a != b){
		if(a > b) a = a - b;
		else b = b - a;
	}
	return a;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i++){
		for(int j = i+1; j <= b; j++){
			if(UCLN(i,j) == 1){
				printf("(%d,%d)", i, j);
				printf("\n");
			}
		}
	}
	return 0;
}
