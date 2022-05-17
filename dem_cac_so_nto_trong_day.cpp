#include<stdio.h>
#include<math.h>
int ktnt(int n){
	if(n < 2) return 0;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n % i == 0) return 0;
		}
		return 1;
	}
}
int main(){
	int n, test, a[100], b[10000], dem=1;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i] >= a[j]){
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
		printf("Test %d:\n", dem);
		int kt=0;
		for(int i=0; i<n; i++){
			if(b[a[i]] >= 1 && ktnt(a[i]) == 1){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
				kt=1;
			}
		}
		dem++;
	}
	return 0;
}
