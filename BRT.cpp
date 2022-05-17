#include<stdio.h>
#include<math.h>

int main(){
	int t,n,d;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		long long a[100001],min=9999999999;
		d=1;
		for (int i=0; i<n; i++){
			scanf("%lld",&a[i]);
		} 
		for (int i=0;i<n;i++){
			int dem=1;
			for (int j=0;j<n-i-1;j++){
				if (a[j]>a[j+1]){
					int tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
					dem=0;
				}
			}
			if (dem==1) break;
		}
		for (int i=0; i<n-1; i++){
			long long check=-a[i] + a[i+1];
			if(check==min) d++;
			if(check < min){ 
				min=check;
				d=1; 
			}
		}
		printf("%lld %d\n",min,d);	
	}
}
