#include<stdio.h>
#include<math.h>
int main(){ 
	int n,i;
	long long a,b,h;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	 	scanf("%lld",&a);
		b=2;
	 	h=a;
	 	while (b<=sqrt(a)){
	 		while (h%b==0) 
			 	h=h/b;
				if (h==1){
					printf("%lld\n",b); 
					break;
				}
	 			b++;	
		}
		if(h!=1) printf("%lld\n",h);
	}
}
