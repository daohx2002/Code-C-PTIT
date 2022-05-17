#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[100], count=0, b=0, c[100];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=1; j<=a[i]; j++){
			if(a[i] % j == 0)
				b++;
		}
		if(b==2){
//			printf("%d ", a[i]);
		 	count++;
		 	c[i]=a[i];
		}
		b=0;
	}
	printf("%d ", count);
	for(int i=0; i<n; i++){
		for(int j=1; j<=a[i]; j++){
			if(a[i] % j == 0)
				b++;
		}
		if(b==2){
			printf("%d ", a[i]);
		}
		b=0;
	}
	return 0;
}
