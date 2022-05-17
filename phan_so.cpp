#include<stdio.h>
#include<math.h>

long long UC (long long a,long long b){
	while (a != b) {
		if (a > b) a=a-b;
		else  b=b-a;
	}
	return a;
}
long long BC (long long a,long long b) {
	return a*b/ UC(a,b);
}

void toigian(long long a,long long b){
	long long d=UC(a,b);
	if(d!=1) {
		a/=d; 
		b/=d;
	}
	printf("%lld/%lld\n",a,b);
}

int main(){
	int t;
	scanf("%d",&t);
	for(int z=1; z<=t; z++){
		long long a,b,c,d,tu1,mau1,tu2,mau2;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		int tmp = UC(a, b);
        a = a / tmp;
        b = b / tmp;
        tmp = UC(c, d);
        c = c / tmp;
        d = d / tmp;
		a*= (BC(b,d)/b);
		c*= (BC(b,d)/d);
		printf("Case #%d:\n",z);
		printf("%lld/%lld %lld/%lld\n",a,BC(b,d),c,BC(b,d));
		tu1=a+c;
		mau1=BC(b,d);
		toigian(tu1,mau1);
		toigian(a,c);
	}
}
