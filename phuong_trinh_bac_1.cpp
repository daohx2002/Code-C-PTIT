#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a == 0 && b == 0){
		printf("Vo so nghiem");
	}
	if(a == 0 && b != 0){
		printf("Vo nghiem");
	}
	if(a != 0 && b != 0){
		double c = (double)-b/a;
		printf("%.2lf", c);
	}
	return 0;
}
