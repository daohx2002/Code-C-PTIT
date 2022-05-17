#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char s[10000];
		gets(s);
		int m = strlen(s)-1;
		int chan=0, le=0, cach=1;
		for(int i=0; i<strlen(s); i++){
			if(s[i] == ' '){
				cach++;
			}
			if((s[i]=='0' || s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8') && s[i+1]==' '){
				chan ++;
			}
			if((s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9') && s[i+1]==' '){
				le ++;
			}
			if(s[m]=='0' || s[m]=='2' || s[m]=='4' || s[m]=='6' || s[m]=='8'){
				chan ++;
			}
			if(s[m]=='1' || s[m]=='3' || s[m]=='5' || s[m]=='7' || s[m]=='9'){
				le ++;
			}
		}
		if(le==chan) printf("NO\n");
		else{
			if(((le > chan) && cach % 2 == 1) || ((chan > le) && cach % 2 == 0)){
				printf("YES\n");
			}
			else printf("NO\n");
		}
	}
}
