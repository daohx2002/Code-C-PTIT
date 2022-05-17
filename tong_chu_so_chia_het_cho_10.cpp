#include<stdio.h>
int main(){
	int n, a[100];
	int b=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		while(a[i]){
			b += a[i] % 10;
			a[i] = a[i] / 10;
		}
		if(b % 10 == 0) printf("YES\n");
		else printf("NO\n");
		b = 0;
	}
	return 0;
}
