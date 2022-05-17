#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		int chan=0, le=0 ,m=0;
		char s[1000];
		gets(s);
		for(int i=0; i<strlen(s); i++){
			if(s[0] == '0' || (s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7'&& s[i] != '8' && s[i] != '9')){
				m++;
			}
			if(s[i] == '0' || s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8'){
				chan++;
			}
			if(s[i] == '1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
				le++;
			}
		}

		if(m>0) printf("INVALID\n");
		else{
			if((chan>le && (chan%2==0)) || (le>chan && (le%2==1)) && m==0){
				printf("YES\n");
			}
			else printf("NO\n");
		}
	}
}

