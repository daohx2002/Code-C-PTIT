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
int check(int a){
	while(a){
		if(ktnt(a%10) != 1) return 0;
		a /= 10;
	}
	return 1;
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int a, b, dem=0, count=0;
		scanf("%d%d", &a, &b);
		for(int i=a; i<=b; i++){
			if(ktnt(i)==1 && check(i)==1){
				dem++;
			}
		}
		printf("%d\n", dem);
		dem=0;
	}
	
}
