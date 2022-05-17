#include<stdio.h>  

int main() {  
	int a[10][10],b[10][10],matrantich[10][10],hang,cot,i,j,k, m;   
	scanf("%d",&hang);   
	scanf("%d",&cot);  
	for(i=0;i<hang;i++) {  
		for(j=0;j<cot;j++){  
			scanf("%d",&a[i][j]);  
		}  
	} 
	scanf("%d", &m);
	for(i=0;i<cot;i++)  {  
		for(j=0;j<m;j++){  
			scanf("%d",&b[i][j]);  
		}  
	}
//	printf("%d %d\n", hang, m);  
	for(i=0;i<hang;i++){  
		for(j=0;j<cot;j++){  
		matrantich[i][j]=0;  
			for(k=0;k<cot;k++){	  
				matrantich[i][j]+=a[i][k]*b[k][j];  
			}  
		}  
	}  
  
	for(i=0;i<hang;i++) {  
		for(j=0;j<cot;j++){  
			printf("%d ",matrantich[i][j]);  
		}
		printf("\n");  
	}  
}  
