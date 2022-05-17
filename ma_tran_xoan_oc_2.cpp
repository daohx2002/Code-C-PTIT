#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,a[100][100],d=0;
        scanf("%d%d",&n,&m);
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                scanf("%d",&a[i][j]);
            }
        }
        int hang=n-1,cot=m-1,j=1;
        while(j<=m*n){
        for (int i=d; i<=cot ; i++){
            j++;
			printf("%d ",a[d][i]);
		}
		for (int i=d+1; i<=hang; i++){
			j++;
			printf("%d ",a[i][cot]);
		}
		if(d!=hang){
			for (int i=cot-1; i>=d; i--){
				j++;
				printf("%d ",a[hang][i]);
			}
		}
		if(d!=cot){
			for (int i=hang-1; i>d; i--){
				j++;
				printf("%d ",a[i][d]);
			}
		}
			d++;
			hang--;
			cot--;
        }
        printf("\n");
    }
}
