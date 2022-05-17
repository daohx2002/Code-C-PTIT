#include<stdio.h>
void nhapmang(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void sapxep(int a[],int n, int b, int c){
	for(int i=b; i<c; i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int test, dem=1;
	scanf("%d", &test);
	while(test--){
		int n, m, a[100],b[100], x;
		scanf("%d%d%d", &n, &m, &x);
		nhapmang(a, n);
		nhapmang(b, m);
		printf("Test %d:\n", dem);
		sapxep(a,n, 0,x);
		sapxep(b,m, 0,m);
		sapxep(a,n, x,n);
		dem++;
		printf("\n");
	}
}
