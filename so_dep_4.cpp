#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		int dem = 0, count=0;
		char s[200];
		gets(s);
		int c = s[0] - 2*s[strlen(s)-1]+48;
		int d = s[strlen(s)-1] - 2*s[0]+48;
		if(c==0 || d==0){
			dem++;
			for(int i=1; i<=(strlen(s)-2)/2; i++){
				if(s[i] == s[strlen(s)-i-1]){
					count++;
				}
				else break;
			}
		}
		if(dem==1 && count==(strlen(s)-2)/2) printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}
