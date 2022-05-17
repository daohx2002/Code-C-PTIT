#include<stdio.h>
#include<string.h>
int main(){
	int n, m;
	int min;
	scanf("%d%d", &n, &m);
	if(n >= m) min = m;
	if(n < m) min = n;
	int max = m+64;
	for(int i=n-1; i>=0; i--){
		int a = min + 64;
		for(int j=0; j<m; j++){
			if(i < m){
				if(j==0){
					printf("%c", a);
					a++;
				}
				else if(a <= max){
//					a = max;
					printf("%c", a);
					a++;
				}
				else{
					a = max;
					printf("%c", a);
					a++;
				}
			}
			else{
				a = max;
				printf("%c", a);
				a++;
			}
		}
		printf("\n");
		if(i < m) min--;
	}
}
