#include<stdio.h>
#include<math.h>

void S(){
	double x1,y1,x2,y2,x3,y3,o1,o2,o3,p;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		o1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		o2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		o3=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		if(o1+o2<=o3 || o1+o3<=o2 || o2+o3 <= o1) {
			printf("INVALID\n");
			return ;
		}
		p=(o1+o2+o3)/2;
		printf("%0.2lf\n",sqrt(p * (p-o1) * (p-o2) * (p-o3)));
}

int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		S();
	}
}
