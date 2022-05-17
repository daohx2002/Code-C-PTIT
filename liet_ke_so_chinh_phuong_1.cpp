#include<stdio.h>
#include<math.h>
int cp(int a){
	int m = sqrt(a);
	float n = sqrt(a);
	if(m==n){
		return m;
	}
}
int ktscp(int a){
	for(int i=2; i<a; i++){
		if(cp(i) == 1){
			printf("%d\n", i);
		}
	}
}
int main(){
	int m, n, j=0, a[100];
	scanf("%d", &m);
		ktscp(m);
	return 0;
}
