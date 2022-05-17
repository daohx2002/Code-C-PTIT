#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	char a = 'a';
	for(int i=1; i<=n; i++){
		if(i % 2 == 1){
			int c = i;
			while(c--){
				printf("%c ", a);
				a++;
			}
		}
		else{
			char b = a + i -1;
			for(char j=b; j>=a; j--){
				printf("%c ", j);
			}
			a=b+1;
		}
		printf("\n");
	}
}
