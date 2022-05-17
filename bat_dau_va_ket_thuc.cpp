#include<stdio.h>
int main(){
	int n, a[100];
	int b=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		b = a[i] % 10;
		while(a[i]>9){
			a[i] = a[i] / 10;
		}
		if(a[i]==b) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
