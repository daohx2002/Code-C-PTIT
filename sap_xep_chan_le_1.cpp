#include<stdio.h>
int main(){
	int n, m, chan=0, le=0;
	int a[100], b[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &m);
		if(m % 2 == 0){
			a[chan] = m;
			chan++;
		}
		else{
			b[le] = m;
			le++;
		}
	}
	for(int i=0; i<chan-1; i++){
		for(int j=i+1; j<chan; j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i=0; i<le-1; i++){
		for(int j=i+1; j<le; j++){
			if(b[i] > b[j]){
				int tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	for(int i=0; i<chan; i++){
		printf("%d ", a[i]);
	}
	for(int i=0; i<le; i++){
		printf("%d ", b[i]);
	}
}
