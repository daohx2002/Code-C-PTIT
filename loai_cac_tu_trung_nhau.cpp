#include<stdio.h>
#include<string.h>

int main(){
	char s[100],ds[1000][1000];
	int n=0,b[1000];
	while (scanf("%s",s)!=-1) strcpy(ds[n++],s);
	for (int i=0; i<n;i++){
		if(b[i]!=-1){
			for (int j=i+1; j<n; j++){
				if(strcmp(ds[i],ds[j])==0){
					b[j]=-1;
				}
			}
			printf("%s ",ds[i]);
		}
	}
}
