#include<stdio.h>
#include<math.h>
int ktnt(int soA){
	if(soA < 2){
		return 0;
	}
	else{
		for(int i=2; i<=sqrt(soA); i++){
			if(soA % i ==0)
			return 0;
		}
	}
	return 1;
}
int main(){
	int n, count=0;
	scanf("%d", &n);
	int i=2;
	while(count < n){
		if(ktnt(i) == 1){
			printf("%d\n", i);
			count++;
		}
		i++;
	}
	return 0;
}
