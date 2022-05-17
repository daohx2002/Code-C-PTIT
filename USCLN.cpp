#include<stdio.h>
int USCLN(int a, int b){
	if(b==0) return a;
	return USCLN(b, a%b);
}
int main(){
	int n, a[100];
	scanf("%d", &n);
	while(n--){
		int x, y;
		scanf("%d%d", &x, &y);
		printf("%d\n", USCLN(x,y));
	}
	return 0;
}
