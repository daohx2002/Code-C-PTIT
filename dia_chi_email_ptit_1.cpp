#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000];
	int d=1,s=0;
	gets(a);
	b[0]=a[0];
	for (int i=1; i<strlen(a); i++){
		if(a[i]==' ' && a[i+1]!=' ') s++;
	}
	for (int i=1; i<strlen(a); i++){
		if(a[i]==' ' && a[i+1]!=' ') {
			s--;
			if (s>0){
				b[d]=a[i+1];
				d++;
			}
		}
		else if(a[i]!=' ' && s==0){
			b[d]=a[i];
			d++;
		}
	}
	for (int i=0; i<d; i++){
		if(b[i]>64 && b[i]<91) b[i]+=32;
		printf("%c",b[i]);
	}
	printf("@ptit.edu.vn");
}
