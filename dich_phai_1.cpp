#include<stdio.h>
void nhapmang(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void sapxep(int a[], int b, int c){
	for(int i=b; i<c; i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int n, a[100], x;
	scanf("%d", &n);
	nhapmang(a, n);
	scanf("%d", &x);
	sapxep(a,n-x,n);
	sapxep(a,0,n-x);
}
