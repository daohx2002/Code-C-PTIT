#include<stdio.h>
#include<string.h>

struct dem{
	char ten[100];
	int solan;
}ds[1000];
int n=0;

int tim(char s[]){
	for (int i=0; i<strlen(s);i++){
		if (s[i]>='A'&& s[i]<='Z') s[i]+=32;
	}
	for (int i=0; i<n; i++){
		if(strcmp(ds[i].ten, s)==0) return i;	
	}
	return -1;
}

void tach(char s[]){
	char *p=strtok(s," ");
	while (p!=NULL){
		int t=tim(p);
		if(t==-1){
			strcpy(ds[n].ten,p);
			ds[n].solan=1;
			n++;
		}
		else ds[t].solan++;
		p=strtok(NULL," ");
	}
}

int main(){
	char s1[1000];
	gets(s1);
	tach(s1);
	for (int i=0; i<n; i++){
		printf("%s %d\n",ds[i].ten,ds[i].solan);
	}
}
