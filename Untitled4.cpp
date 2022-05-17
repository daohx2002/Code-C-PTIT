#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[100], b[100]={0};
		int max = 1;
		
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]); 
		}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(a[j]==a[i]){
					b[i]++; 
				} 
			} 
		}
		for(int i=0;i<n;i++){
			if(b[i]> max){
				max=b[i]; 
			} 
		}
		for(int i=0;i<n;i++){
			if(b[i]==max){
				printf("%d ",a[i]); 
			} 
		}
		max=1; 
		printf("\n");
	}
	return 0; 
}
