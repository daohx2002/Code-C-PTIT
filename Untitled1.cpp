#include<stdio.h>

int main () {
	int n ;
//	printf (" Nhap gia trin cua n :  \n") ;
	scanf("%d",&n) ;
	int i ;
	int tong = 0 ; 
	for (i = 1; i<= n;i++) {
		tong = tong + i ; 
	}
	printf ("%d", tong) ; 
	return 0 ; 
	 
}
