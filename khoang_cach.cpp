#include<stdio.h>
#include<math.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		float a, b, c, d;
		scanf("%f%f%f%f", &a, &b, &c, &d);
		float m = a - c;
		float n = b - d;
		printf("%.4f\n", sqrt(m*m+n*n));
	}
}
