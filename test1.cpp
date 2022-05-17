//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n;
//	scanf("%d", &n);
//	float x;
//	scanf("%f", &x);
//	float tong=0;
//	if(n<=0){
//		printf("Error");
//	}
//	else{
//		for(int i=0; i<=n; i++){
//			tong += pow(-1,i) * pow(x,i);
//		}
//		printf("%f", tong);
//	}
//}

#include<stdio.h>
#include<math.h>
int main(){
	double k ,e;
	scanf("%lf%lf", &k, &e);
	if(k<=0 || k>2 || e<=0 || e>=1){
		printf("Error");
	}
	else{
		int n=0;
		double tong=0;
		double x = (float)k-1;
		for(int i=1;i<=1000;i++){
			double m = (double)(pow(x,i)/i);
			if(m >= e){
				tong += m * pow(-1, i-1);
				n++;
			}
			else{
				break;
			}
		}
		printf("%.7lf\n", tong);
		printf("%d", n);
	}
}
