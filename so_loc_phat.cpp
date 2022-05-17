#include<stdio.h>
int main(){
	int n, c=0;
	scanf("%d", &n);
	int a[100];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		while(a[i]){
			int b = a[i] % 10;
			if(b != 0 && b != 6 && b != 8){
				c++;
			}
			a[i] = a[i] / 10;
		}
	if(c==0) printf("YES\n");	
	else printf("NO\n");
	c = 0;
	}
	return 0;
}
