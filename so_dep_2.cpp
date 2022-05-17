#include<stdio.h>
#include<math.h>
int sodep(int a, int b){
	int dem =0;
	for(int i = a; i <= b; i++){
		for(int j = 1; j <= a; j++){
			if(i % j == 0){
				dem++;
			}
		}
		if(dem == 2){
			printf("%d ", i);
		}
		dem = 0;
	}
}
int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	sodep(x, y);
	return 0;
}






















// 1 1 2 3 5 8 13 21 34 55 89 144 233 377
// 1 2 3 5 8 4 7 0 9 
