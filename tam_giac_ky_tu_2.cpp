#include<stdio.h>
int main(){
	int n;
	char a[100];
	scanf("%d", &n);
	char c = 'A';
	while(n>=1){
		char b = c;
		for(char i=0; i<n; i++){
			printf("%c", b);
			b += 2;
			}
			c += 2;
			printf("\n");
			n--;
		}
	return 0;
	}
