#include<stdio.h>
int main(){
	int n, count=0;
	scanf("%d", &n);
	int a[100] = {0 ,1};
	for(int i=2; i<100; i++){
		a[i] = a[i-1] + a[i-2];
		if(a[i] == n){
			count ++;
		}
	}
	if(count == 1) printf("1");
	else printf("0");
	return 0;
}
