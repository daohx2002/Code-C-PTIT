#include<stdio.h>
#include<math.h>
int ktnt(int soA){
	if(soA < 2) return 0;
	if(soA > 2){
		if(soA % 2 ==0){
			return 0;
		}
		else{
			for(int i=2; i<=sqrt(soA); i++){
				if(soA % i == 0){
					return 0;
				}
			}
		}
	}
	return 1;
}
int main(){
	int test, a[100];
	scanf("%d", &test);
	while(test--){
		int b, c=0;
		scanf("%d", &b);
		for(int i=0; i<b; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<b; i++){
			if(ktnt(a[i]) == 1)
				printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
