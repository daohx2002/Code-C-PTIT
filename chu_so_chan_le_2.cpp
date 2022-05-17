#include<stdio.h>
int main(){
	int n, a[100];
	int chan = 0, le = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		while(a[i]){
			int b = a[i] % 10;
			if(b % 2 == 0) chan ++;
			else le++;
			a[i] = a[i] / 10;
		}
		printf("%d %d", le, chan);
		printf("\n");
		chan=0; 
		le=0;
	}
	return 0;
}
