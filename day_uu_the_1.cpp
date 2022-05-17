#include<stdio.h>
//int nhap(){
//	int a[200];
//	for(int i=0; ; i++){
//		scanf("%d", &a[i]);
//	}
//}
int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int a[200], dem=0;
		int chan=0, le=0;
		for(int i=0; ; i++){
			scanf("%d", &a[i]);
			dem++;
		}
		for(int i=0; i < dem; i++){
			if(a[i] % 2 == 0){
				chan++;
			}
			if(a[i] % 2 == 0){
				le++;
			}
		}
			if(chan==le) printf("NO\n");
			else printf("YES\n");
		}
	}
