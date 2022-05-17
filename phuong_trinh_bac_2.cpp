#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	double e,g;
	scanf("%d%d%d", &a, &b, &c);
	double d = b*b - 4*a*c;
	if(d < 0){
		printf("NO");
	}
	if(d == 0){
		e = (double)-b/(2*a);
		printf("%.2lf", e);
	}
	if(d > 0){
		double f = (double)sqrt(d);
		e = (double)(-b + f)/(2*a);
		g = (double)(-b - f)/(2*a);
		printf("%.2lf %.2lf", e, g);
	}
	return 0;
}
