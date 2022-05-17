#include<stdio.h>
int main(){
	int n;
    scanf("%d", &n);
	int max, tich;
    int a[100] = {0,1};
    for(int i=2; i<=24; i++){
		a[i] = a[i-1] + a[i-2];
	}
    for(int i=0; i<=24; i++){
        if(a[i] + a[i+1] <= n){
            max = a[i] + a[i+1];
        }
        else{
            printf("%d", max);
        }
    }
    for(int i=0; i<=24; i++){
        if(a[i] * a[i+1] <= n){
            tich = a[i] * a[i+1];
        }
        else{
            printf("%d", tich);
        }
    }
}