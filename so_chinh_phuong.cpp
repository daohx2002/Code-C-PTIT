#include<stdio.h>
#include<math.h>
int main(){
	int n;
	long long a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i=0; i<n; i++){
		double b = (double)sqrt(a[i]);
		int c = sqrt(a[i]);
		if(b-c==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
