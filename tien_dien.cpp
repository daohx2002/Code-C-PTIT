#include<stdio.h>
int main(){
	int n;
	float a, b, c, d, e,f;
	scanf("%d", &n);
	if(n<0 ){
		printf("0");
	}
	if(n>= 0 && n<=50){
		printf("%d %.3f\n", n, n*1.678);
		printf("TONG %.3f", n*1.678);
	}
	if(n>50 && n<=100){
		printf("%d %.3f\n", 50, 50*1.678);
		printf("%d %.3f\n", n-50, (n-50)*1.734);
		printf("TONG %.3f", 50*1.678+((n-50)*1.734));
	}
	if(n>100 && n<=200){
		a = 50*1.678;
		b = 50*1.734;
		c = (n-100)*2.014;
		printf("%d %.3f\n", 50, a);
		printf("%d %.3f\n", 50, b);
		printf("%d %.3f\n", n-100, c);
		printf("TONG %.3f", a+b+c);
	}
	if(n>200 && n<=300){
		a = 50*1.678;
		b = 50*1.734;
		c = 100*2.014;
		d = (n-150)*2.536;
		printf("%d %.3f\n", 50, a);
		printf("%d %.3f\n", 50, b);
		printf("%d %.3f\n", 100, c);
		printf("%d %.3f\n", n-200, d);
		printf("TONG %.3f", a+b+c+d);
	}
	if(n>300 && n<=400){
		a = 50*1.678;
		b = 50*1.734;
		c = 100*2.014;
		d = 100*2.536;
		e = (n-300)*2.834;
		printf("%d %.3f\n", 50, a);
		printf("%d %.3f\n", 50, b);
		printf("%d %.3f\n", 100, c);
		printf("%d %.3f\n", 100, d);
		printf("%d %.3f\n", n-300, e);
		printf("TONG %.3f", a+b+c+d+e);
	}
	if(n>400){
		a = 50*1.678;
		b = 50*1.734;
		c = 100*2.014;
		d = 100*2.536;
		e = 100*2.834;
		f = (n-400)*2.927;
		printf("%d %.3f\n", 50, a);
		printf("%d %.3f\n", 50, b);
		printf("%d %.3f\n", 100, c);
		printf("%d %.3f\n", 100, d);
		printf("%d %.3f\n", 100, e);
		printf("%d %.3f\n", n-400, f);
		printf("TONG %.3f", a+b+c+d+e+f);
	}
}
