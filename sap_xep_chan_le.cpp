#include<stdio.h>
int main(){
	int n, a[1000], b[1000], c[1000], chan=0, le=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0){
			b[chan] = a[i];
			chan ++;
		}
		else{
			c[le] = a[i];
			le++;
		}
	}
	for(int i=0; i<chan-1; i++){
		for(int j=i+1; j<chan; j++){
			if(b[i] > b[j]){
				int tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	for(int i=0; i<le-1; i++){
		for(int j=i+1; j<le; j++){
			if(c[i] < c[j]){
				int tmp = c[i];
				c[i] = c[j];
				c[j] = tmp;
			}
		}
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<chan; j++){
			if(b[i] > b[j]){
				int tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	int g=0, h=0;
	for(int i=0; i<n; i++){
		if(a[i] % 2 == 1){
			printf("%d ", c[g]);
			g++;
		}
		else{
			printf("%d ", b[h]);
			h++;
		}
	}
	return 0;
}


