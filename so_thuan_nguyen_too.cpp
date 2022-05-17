#include<stdio.h>
#include<math.h>
int check1(int n){
	if (n<1) return 0;
	for (int i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int check2(int n){
	int s=0;
	while (n>0){
		int t=n%10;
		if (t!=2 && t!=3 && t!=5 && t!=7) return 0;
		s+=t;
		n/=10;
	}
	if (check1(s)==0) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,s=0;
		scanf("%d%d",&a,&b);
		for (int i=a; i<=b;i++){
			if (check2(i)){
				if (check1(i)) s++;
			}
		}
		printf("%d\n",s);
	}
}
