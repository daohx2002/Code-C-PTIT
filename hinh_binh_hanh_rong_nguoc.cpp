#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<i;j++){
			printf("~");
		}
		for(int j=0;j<n;j++){
			if(i==0||i==m-1||j==0||j==n-1){
				printf("*");
			}else printf(".");
		}
		printf("\n");
	}
	return 0;
}

