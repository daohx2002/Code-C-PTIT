#include<stdio.h>
#include<math.h>
int main(){
	int n, dem=0, k=0;
	long long so[100000];
	scanf("%d", &n);
	int a=1, b=1, j=0;
	for(int i=1;i<=n;i++)
		a=a*10;
		b=a/10;
	for(int i=b;i<=a;i++){
		int c = i;
		while(c){
			if(c % 2 == 0){
				dem++;
			}
			else{
				dem--;
			}
			c /= 10;
		}
		if(dem==0){
			so[j] = i;
			j++;
			k++;
		}
		dem=0;
	}
	for(int j=0; j<k; j++){
		if(j % 10 == 0 && j!=0) {
			printf("\n");
		}
		printf("%lld ", so[j]);
	}
}

