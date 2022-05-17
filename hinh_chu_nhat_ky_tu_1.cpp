#include<stdio.h>
#include<string.h>
int main(){
	int n, m;
	int max;
	scanf("%d%d", &n, &m);
	if(n>=m){
		max = n;
	}
	if(m>n) max=m;
	for(int i=0; i<n; i++){
		char a = max + 96;
		for(int j=0; j<m; j++){
			if(i > j){
				printf("%c", a);
				a--;
			}
			else printf("%c", a);
		}
		printf("\n");
	}
}
