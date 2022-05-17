#include<stdio.h> 
#include<math.h> 
 
int kt( int a){
	if( a <2) return 0;
	for(int i=2;i<=sqrt(a);i++)
		if( a %i ==0)
			return 0;
	return 1;
}

int main(){  
	int n;  
	int a[100][100];
	long long sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for( int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if ( kt(a[i][j])){
				sum+=a[i][j];
			}	
		}	
	}
	printf("%lld",sum);
}
