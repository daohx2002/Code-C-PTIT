//#include<stdio.h>
//
//struct Nguoi{
//	char Ten[100];
//	int d,m,y;
//	friend int operator<(Nguoi A,Nguoi B){
//		if(A.y>B.y) return 1;
//		if(A.y<B.y) return 0;
//		if(A.m>B.m) return 1;
//		if(A.m<B.m) return 0;
//		if(A.d>B.d) return 1;
//		if(A.d<B.d) return 1;
//		return 0;
//	}
//}Nguoi;
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	Nguoi *N=new Nguoi [n+5];
//	for(int i=1;i<=n;i++){
//		scanf("%s%d%d%d",N[i].Ten,&N[i].d,&N[i].m,&N[i].y);
//	}
//	Nguoi Ma=N[1],Mi=N[1];
//	
//	for(int i=2;i<=n;i++){
//		if(N[i]<Mi) Mi=N[i];
//		if(Ma<N[i]) Ma=N[i];
//	}
//	printf("%s\n%s",Mi.Ten,Ma.Ten);
//	
//}


//#include<conio.h>
#include<iostream>

using namespace std;
typedef struct Nguoi{
	char Ten[100];
	int d,m,y;
	friend int operator<(Nguoi A,Nguoi B){
		if(A.y>B.y) return 1;
		if(A.y<B.y) return 0;
		if(A.m>B.m) return 1;
		if(A.m<B.m) return 0;
		if(A.d>B.d) return 1;
		if(A.d<B.d) return 1;
		return 0;
	}
}Nguoi;

int main(){
	int n;
	cin>>n;
	Nguoi *N=new Nguoi [n+5];
	for(int i=1;i<=n;i++){
		scanf("%s%d%d%d",N[i].Ten,&N[i].d,&N[i].m,&N[i].y);
	}
	Nguoi Ma=N[1],Mi=N[1];
	
	for(int i=2;i<=n;i++){
		if(N[i]<Mi) Mi=N[i];
		if(Ma<N[i]) Ma=N[i];
	}
	printf("%s\n%s",Mi.Ten,Ma.Ten);
	
	//getch();
}
