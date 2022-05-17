#include<stdio.h>

int main(){
	int n,d,hang,cot,m,s[100][100];
	scanf("%d",&n);
	d=0;
	m=n;
	n=n+(n-1);
	hang=n-1;
	cot=n-1;
	while(d<=n){
		for (int i=d; i<=cot; i++){
			s[d][i]=m;
		}
		for (int i=d+1; i<=hang; i++){
			s[i][d]=m;
		}
		for (int i=d+1; i<=cot; i++){
			s[hang][i]=m;
		}
		for (int i=d+1; i<=hang ; i++){
			s[i][cot]=m;
		}
		d++;
		m--;
		hang--;
		cot--;
	}
	for (int i=0; i<n; i++){
		for (int j=0;j<n ;j++){
			printf("%d",s[i][j]);
		}
		printf("\n");
	}
}
