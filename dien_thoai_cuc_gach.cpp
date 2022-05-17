#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d", &test);
	scanf("\n");
	while(test--){
		char ss[2000];
		char aa[2000];
		int dm=0;
		gets(ss);
		for(int i=0; i<strlen(ss); i++){
			if(ss[i] >= 'A' && ss[i] <='Z'){
				ss[i] = ss[i] + 32;
			}
		}
		int dem=0;
		for(int i=0; i<strlen(ss); i++){
			if(ss[i] == 'a' || ss[i] == 'b' || ss[i] == 'c'){
				aa[dem] = 2;
				dem++;
			}
			if(ss[i] == 'd' || ss[i] == 'e' || ss[i] == 'f'){
				aa[dem] = 3;
				dem++;
			}
			if(ss[i] == 'g' || ss[i] == 'h' || ss[i] == 'i'){
				aa[dem] = 4;
				dem++;
			}
			if(ss[i] == 'j' || ss[i] == 'k' || ss[i] == 'l'){
				aa[dem] = 5;
				dem++;
			}
			if(ss[i] == 'm' || ss[i] == 'n' || ss[i] == 'o'){
				aa[dem] = 6;
				dem++;
			}
			if(ss[i] == 'p' || ss[i] == 'q' || ss[i] == 'r' || ss[i]=='s'){
				aa[dem] = 7;
				dem++;
			}
			if(ss[i] == 't' || ss[i] == 'u' || ss[i] == 'v'){
				aa[dem] = 8;
				dem++;
			}
			if(ss[i] == 'w' || ss[i] == 'x' || ss[i] == 'y' || ss[i] == 'z'){
				aa[dem] = 9;
				dem++;
			}
		}
		for(int i=1; i<=dem/2; i++){
			if(aa[i]  == aa[dem-1-i] ){
				dm++;
			}
		}
		if(dm == dem/2){
			printf("YES\n");
		}
		else printf("NO\n");
//		printf("%d %d", dm, dem/2);
	}
}
