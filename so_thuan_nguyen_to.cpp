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
int main(){
	int test, dem=0, m=0;
	scanf("%d", &test);
	while(test--){
		int a,b;
		scanf("%d%d", &a, &b);
		for(int i=a; i<=b; i++){
			if(ktnt(i) == 1){
				while(i){
					m += i % 10;
					i /= 10;
				}
				if(ktnt(m) == 1){
					dem++;
				}
			}
			m=0;
			printf("%d\n", dem);
		}
//		printf("%d\n", dem);
//		dem=0;
	}
	return 0;
}
