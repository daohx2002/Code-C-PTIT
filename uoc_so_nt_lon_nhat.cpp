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
int chiahet(int b){
	
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		long long a;
		scanf("%lld", &a);
		for(long long i=a; i>=1; i-=2){
			if(ktnt(i) == 1 && a%i==0){
				printf("%lld\n", i);
				break;
			}
		}
	}
	return 0;
}
