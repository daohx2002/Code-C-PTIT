#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		char s[1000],ds[100][100];
		int n=0,d2=0,d3;
		scanf("\n");
		gets(s);
		char *p=strtok(s," ");
		while (p!=NULL){
			for (int i=0; i<strlen(p);i++) if(p[i]>='A' && p[i]<='Z') p[i]+=32;
			p[0]-=32;
			strcpy(ds[n++],p);
			p=strtok(NULL," ");
		}
		for (int i=0; i<n; i++) printf("%s ",ds[i]);
		printf("\n");
	}
}
