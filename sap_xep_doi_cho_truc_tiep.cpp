#include<stdio.h>
void nhap(int a[], int n){
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void in(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void sapxep(int a[], int n){
	int t;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		printf("Buoc %d: ", i+1);
		in(a,n);
	}
}
int main(){
	int a[100], n;
	scanf("%d", &n);
	nhap(a,n);
	sapxep(a,n);
}
