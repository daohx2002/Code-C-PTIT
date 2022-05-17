#include<stdio.h>
int USCLN(int a, int b){
	while(a != b){
		if(a > b) a = a - b;
		else b = b - a;
	}
		return a;
}
int main(){
	int n, a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(USCLN(a[i], a[j]) == 1){
				printf("%d %d\n", a[i], a[j]);
			}
		}
	}
}
