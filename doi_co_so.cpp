#include<stdio.h>
int check(int a, int b){
	char s[20];
	int dem=0;
	int n = a;
	while(n>0){
		if(b > 10){
			int m = n % b;
			if(m >= 10){
				s[dem] = m + 55;
				dem++;
			}
			else{
				s[dem] = m + 48;
				dem++;
			} 
		}
		else{
			s[dem] = (n % b) + 48;
			dem++;
		}
		n = n / b;
	}
	for(int i = dem-1; i>=0; i--){
		printf("%c", s[i]);
	}
}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, b;
		scanf("%d%d", &n, &b);
		check(n, b);
		printf("\n");
	}
	return 0;
}
