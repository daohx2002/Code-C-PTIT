#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		char b[100],a[100];
		int d1=0,d2=0,d3=0;
		scanf("\n");
		gets(b);
		for (int i=0; i<strlen(b); i++){
			if(b[i]>64 && b[i]<91) b[i]+=32;
			if(b[i]==' ' && b[i+1]!=' ' && i!=strlen(b)-1){
				if(d2!=0){
					a[d2]=' ';
					d1++;
					d2++;
					if (d1==1) d3=d2;
				}
			}
			if (b[i]!=' '){
				a[d2]=b[i];
				d2++;
			}
		}
		a[d3]-=32;
		for (int i=d3; i<d2; i++){
			if(a[i]==' ') {
				if( a[i+1]>96 && a[i+1]<123 ) a[i+1]-=32;
				else a[i+2]-=32;
			}
			printf("%c",a[i]);
		}
		printf(", ");
		for (int i=0; i<d3 ; i++){
			if( a[i]>96 && a[i]<123 ){
			a[i]-=32;
			printf("%c",a[i]);
				}
		}
		printf("\n");
	}
}
