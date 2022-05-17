#include <stdio.h>
#include <math.h>
int ktnt(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
 	int a, b, tong =0;
    scanf("%d%d", &a, &b);
    if(a < b){
	    if (a ==1) {
	        printf("%d ", 2);
	    }
	    for (int i = a; i <= b; i++) {
	        if(ktnt(i) == 1) {
	        	int c = i;
	        	while(c){
	        		tong += c % 10;
	        		c /= 10;
				}
				if(tong == 1 || tong == 2 || tong ==3 || tong==5 || tong==8 || tong==13|| tong==21){
	            	printf("%d ", i);
	            }
	            tong=0;
	        }
	    }
	}
	if(a > b){
	    if (b == 1) {
	        printf("%d ", 2);
	    }
	    for (int i = b; i <= a; i++) {
	        if(ktnt(i) == 1) {
	        	int c = i;
	        	while(c){
	        		tong += c % 10;
	        		c /= 10;
				}
				if(tong == 1 || tong == 2 || tong ==3 || tong==5 || tong==8 || tong==13|| tong==21){
	            	printf("%d ", i);
	            }
	            tong=0;
	        }
	    }
	}
    return 0;
}
