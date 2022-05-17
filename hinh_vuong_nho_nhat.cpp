#include<stdio.h>
#include<math.h>

int main(){
	int a[100],b[100],minX,maxX,minY,maxY,s1,s2,max;
	for (int i=0; i<4 ; i++) scanf("%d",&a[i]);
	for (int i=0; i<4 ; i++) scanf("%d",&b[i]);
	minX= a[0] < b[0] ? a[0] : b[0];
	maxX= a[2] > b[2] ? a[2] : b[2];
	minY= a[1] < b[1] ? a[1] : b[1];
	maxY= a[3] > b[3] ? a[3] : b[3];
	s1= abs(minX-maxX);
	s2= abs(minY-maxY);
	max = s1 > s2 ? s1 : s2;
	printf("%d",max*max);
}
