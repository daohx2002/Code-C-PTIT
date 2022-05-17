#include<stdio.h>
int main(){
	int n, a[100][100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i][0] > a[j][0]){
				int tmp = a[i][0];
				a[i][0] = a[j][0];
				a[j][0] = tmp;
				int mtp = a[i][1];
				a[i][1] = a[j][1];
				a[j][1] = mtp;
			}
		}
	}
	int d=0, e=0;
	long long tong=0;
	for(int i=0; i<n; i++){
		int c = i+1;
		d = a[i][0] + a[i][1];
		if(d >= a[c][0]) e++;
		if(d >= a[c][0] && e == 1) tong += d;
		if(d >= a[c][0] && c<=n-1){
			tong += a[c][1];
		}
		}
			printf("%lld ", tong);
	}

