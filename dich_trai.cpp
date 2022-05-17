#include<conio.h>
#include<stdio.h>
int main()
{
	int test;
	scanf("%d", &test);
	while(test--){
	   int n,i,k;
	   int a[50];
	   scanf("%d%d",&n, &k);
	   for (i=0;i<n;i++)
	   {
	     
	      scanf("%d",&a[i]);
	   }
	   for (i=k;i<n;i++)
	   printf("%d ",a[i]);
	   for (i=0;i<k;i++)
	   printf("%d ",a[i]);
	   getch();
	   printf("\n");
	}
} 
