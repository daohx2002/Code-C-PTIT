#include<stdio.h>
#include<math.h>
int main(){
	int n, b=0;
	int a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=2; j<=sqrt(a[i]); j++){
			if(a[i] % j == 0)
			b++;
		}
		if(b==0) printf("YES\n");
		else printf("NO\n");
		b=0;
	}
	return 0;
}
