#include<stdio.h>
#include<math.h>

int IsPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0) return 0;
    return 1;
}

int Check1(int n){
    while(n > 0){
        if(!IsPrime(n%10)) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int n;
	scanf("%d", &n);
    if(n < 1) printf("0");
    else{
        int check = 0;
        int start = pow(10,n-1);
        int end = pow(10,n);
        for(int i = start; i <= end; i++){
            if(Check1(i) && IsPrime(i)) {
                printf("%d ", i);
                check = 1;
            }
        }
        if(!check) printf("0");
    }
    return 0;
}

