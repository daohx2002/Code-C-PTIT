#include <stdio.h>

void process(int n){
	int a[100000][2];
    int b[100000]={};
    for (int i=0; i<n-1; i++)
    	for (int j=0; j<2; j++){
    		scanf ("%d", &a[i][j]);
    		b[a[i][j]]++;
		}
	int d=0;
	for (int i=0; i<n; i++)
		if (b[i] == n-1){
			printf ("Yes");
			d++;
			break;
		}
	if (d==0)printf ("No");
}

int main(){
    int n;
    scanf ("%d", &n);
    process(n);
}
