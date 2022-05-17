#include<stdio.h> 
#include<string.h>
int main()
{ char s1[100],s2[100];
int i,p;
	gets(s1);
	gets(s2);
	scanf("%d",&p);
	if (p==1) 
	{
		for (i=0;i<strlen(s2);i++)
		 printf("%c",s2[i]);
		 for (i=0;i<=strlen(s1);i++)
		 printf("%c",s1[i]);
	}
else
    {
         for (i=0;i<=p-2;i++)
          printf("%c",s1[i]);
         for (i=0;i<strlen(s2);i++)
          printf("%c",s2[i]);
         for(i=p-1;i<strlen(s1);i++)
          printf("%c",s1[i]);
    }
}
