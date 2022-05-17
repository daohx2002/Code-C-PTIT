#include<stdio.h>
#include<string.h>

int check1(char s[1010] , int n){
	for(int i=6; i<n-1; i++){
		if (s[i] >= s[i+1]) return 0;
	}
	return 1;
} 

int check2(char s[1010], int n){
	for(int i=6; i<n; i++){
		if (s[i]!='8' && s[i]!='6') return 0;
	}
	return 1;
} 
int check3(char s[1010],int n){
	for(int i=6; i<n; i++){
		for(int j=i+1; j<n;j++){
			if(s[j]!=s[i]) return 0;
		}
	}
	return 1;
} 
int check4(char s[1010]){
	if(s[6]==s[7] && s[7]==s[8] && s[9]==s[10]) return 1;
	return 0;
} 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1010];
		scanf("\n");
		gets(s);
		int n=strlen(s);
		for (int i=9; i<n; i++){
			s[i]=s[i+1];
		}
		n--;
		if (check1(s,n)) printf("YES");
		else if (check2(s,n)) printf("YES");
		else if (check3(s,n)) printf("YES");
		else if (check4(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
