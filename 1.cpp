#include "stdio.h"
#include "string.h"
void in(int A[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}
void tong(char s1[],char s2[]){
		int A[510]={0};
		int B[510]={0};
		int C[510]={0};
	if(strlen(s1)>=strlen(s2)){
		for(int i=1;i<=strlen(s1);i++){
			A[i]= s1[i-1]-'0';
		}
		int t=0;
		for(int i=strlen(s1)-strlen(s2)+1;i<=strlen(s1);i++){
			B[i]= s2[t]-'0';
			t++;
		}
		for(int i=strlen(s1);i>=0;i--){
			int x= A[i]+B[i];
			if(x>=10){
				C[i]= x%10;
				A[i-1]+=x/10;
			}
			else{
				C[i]= x%10;
			}
		}
		if(C[0]==0){
			for(int i=1;i<=strlen(s1);i++){
				printf("%d",C[i]);
			}
		}
		else{
			for(int i=0;i<=strlen(s1);i++){
				printf("%d",C[i]);
			}
		}
	}
	else{
		for(int i=1;i<=strlen(s2);i++){
			B[i]= s2[i-1]-'0';
		}
		int t=0;
		for(int i=strlen(s2)-strlen(s1)+1;i<=strlen(s2);i++){
			A[i]= s1[t]-'0';
			t++;
		}
		for(int i=strlen(s2);i>=0;i--){
			int x= A[i]+B[i];
			if(t>=10){
				C[i]= x%10;
				A[i-1]+=(x/10);
			}
			else{
				C[i]= x%10;
			}
		}
		if(C[0]==0){
			for(int i=1;i<=strlen(s2);i++){
				printf("%d",C[i]);
			}
		}
		else{
			for(int i=0;i<=strlen(s2);i++){
				printf("%d",C[i]);
			}
		}
	}
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s1[500];
		char s2[500];
		gets(s1);
		gets(s2);
		tong(s1,s2);
		printf("\n");
	}
}
