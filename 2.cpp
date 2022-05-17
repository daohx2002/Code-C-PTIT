#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s1[1000],s2[1000],s[1000]=" ";
		scanf("\n");
		gets(s1),gets(s2);
		if(strlen(s2) > strlen(s1)){
			char tmp[1000];
			strcpy(tmp,s1);
			strcpy(s1,s2);
			strcpy(s2,tmp);
		}
		int len1=strlen(s1)-1,len2=strlen(s2)-1,mem=0,i=0;
		while (len1>=0){
			int sum;
			if(len2>=0) sum= s1[len1--]-'0' + s2[len2--]-'0' +mem;
			else sum= s1[len1--]-'0' +mem;
			if (sum < 10){
				s[i++]= sum +'0';
				mem=0;
			}
			else {
				s[i++]= (sum%10) + '0';
				mem=1;
			}
		}
		if (mem==1) s[i++]='1';
		s[i]='\0';
		for (int j=i-1; j>=0; j--) printf("%c",s[j]);
		printf("\n");
	}
}
