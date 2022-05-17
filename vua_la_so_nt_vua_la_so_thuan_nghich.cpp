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
 	int test;
    scanf("%d", &test);
    while(test--){
    	int a, b, tmp=0, dem=0;
    	scanf("%d%d", &a, &b);
    	for (int i = a; i < b; i++) {
    		int c = i;
        	if(ktnt(c) == 1) {
           		while(c){
           			tmp = tmp * 10 + (c % 10);
           			c /= 10;
				}
				if(i == tmp){
					printf("%d ", i);
					dem++;
					if(dem % 10 == 0){
						printf("\n");
					}
				}
        	}
        	tmp=0;
    	}
		printf("\n\n");	
	}
return 0;
}
