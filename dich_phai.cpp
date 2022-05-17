#include<stdio.h>
void nhap(int a[], int n){
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void in(int a[], int d, int c){
	for(int i=d; i<c; i++)
		printf("%d ", a[i]);
}
int main(){
	int a[100], n, x;
	scanf("%d", &n);
	nhap(a,n);
	scanf("%d", &x);
	in(a,n-x,n);
	in(a,0,n-x);
}
