#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[1005][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int dem=0;
	for(int i=0; i<n; i++){
		int chan=0, le=0;
		for(int j=0; j<3; j++){
			if(a[i][j]==1) le++;
			else chan++;
		}
		if(le > chan) dem++;
	}
	printf("%d", dem);
}
