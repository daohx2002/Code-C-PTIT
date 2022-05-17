#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int n,a[100001],s;
		scanf("%d",&n);
		for (int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		for (int i=0; i<n; i++){
			s=0;
			for(int j=i+1; j<n; j++){
				if(a[i]==a[j]){
					printf("%d\n",a[i]);
					s++;
					break;
				}
			}
			if(s!=0) break;
		}
		if (s==0) printf("NO\n");
	}
}
