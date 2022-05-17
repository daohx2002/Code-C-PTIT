#include<stdio.h>
int kt1(int a[1000000], int i, int n){
	return a[i-1] + kt1(a,i-1,n);
}
int kt2(int a[1000000], int i, int n){
	return a[i+1] + kt2(a,i+1,n);
}

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		int a[100005];
		scanf("%d",&n);
		int trai=0, phai=0;
		int kt=0;
		for(int i=1; i<=n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=2; i<=n; i++){
//			for(int j=i-1; j>=1; j--){
//				trai += a[j];
//			}
//			for(int j=i+1; j<=n; j++){
//				phai += a[j];
//			}
//			if(trai==phai){
//				printf("%d\n", i);
//				kt=1;
//				break;
//			}
//			trai=0, phai=0;
//			if(kt1(i)==1){
//				printf("%d\n", i);
//				kt=1;
//				break;
//			}
			if(kt1(a,i,n) == kt2(a,i,n)){
				printf("%d\n", i);
			}
		}
//		if(kt==0) printf("-1\n");
	}
}
