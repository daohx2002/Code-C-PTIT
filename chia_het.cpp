#include<stdio.h>
#include<math.h>


int check(int n,int m){
	for (int i=2; i<=n; i++){
		int t=i;
		while (t%2==0){
			m--;
			t/=2;
			if(m==0)return 1;
		}
	}
	return 0;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(check(n,m)) printf("Yes");
	else printf("No");
}
