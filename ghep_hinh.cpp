#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e,f,x,y,gan;
    scanf("%d %d\n%d %d\n%d %d",&a,&b,&c,&d,&e,&f);
	x=a*b+c*d+f*e;
	y=sqrt(x);
	if(y*y!=x) printf("NO");
	else {
	if(a>b) {
			gan=a;
			a=b;
			b=gan;
		}
		if(c>d) {
			gan=c;
			c=d;
			d=gan;
		}
		if(e>f) {
			gan=e;
			e=f;
			f=gan;
		}if(b==d && d==f && f==y){
			if(a+c+e==b) printf("YES");
			else printf("NO");
		}else{
			if(d==y) {
				gan=d;
				d=b;
				b=gan;
				gan=a;
				a=c;
				c=gan;
		}
			if(f==y) {
			gan=f;
			f=b;
			b=gan;
			gan=a;
			a=e;
			e=gan;
			}
			if(b==y){
				int hieu=b-a;
				if((c==hieu && e==hieu) || (d==hieu && e==hieu)|| (c==hieu && f==hieu) || (d==hieu && f==hieu))  printf("YES");
				else printf("NO");
			}		
			else printf("NO");
		}
 
	}	
}n
