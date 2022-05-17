#include<stdio.h>
int main(){
	int a, b;
	int tmp = 0, dem=0, m=0, n=0;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			int c = i;
			while(c){
				m = c % 10;
				n += c % 10;
				if(m==6){
					dem++;
				}
				tmp = tmp * 10 + m;
				c /= 10;
			}
			int cuoi = n % 10;
			if(tmp == i && cuoi == 8 && dem != 0){
				printf("%d ", i);
			}
			tmp = 0, dem=0, m=0, n=0;
		}
	}
	else{
		for(int i = b; i <= a; i++){
			int c = i;
			while(c){
				m = c % 10;
				n += c % 10;
				if(m==6){
					dem++;
				}
				tmp = tmp * 10 + m;
				c /= 10;
			}
			int cuoi = n % 10;
			if(tmp == i && cuoi == 8 && dem != 0){
				printf("%d ", i);
			}
			tmp = 0, dem=0, m=0, n=0;
		}
	}
	return 0;
}
