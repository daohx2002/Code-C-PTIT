#include<stdio.h>
#include<math.h>
int gt(int t)
{
    int tan=1;
    for(int i=1;i<=t;i++)
    {
        tan*=i;
    }
    return tan;
}
int main()
{
    int a,b,sum=0,dem=0;
    scanf("%d%d",&a,&b);
    for(int n=a;n<=b;n++)
    {
        int k=n;
        while(k>0)
        {
            sum+=gt(k%10);
            k/=10;
        }
        if(sum==n)
        {
            printf("%d ",n);
            dem++;
        }
        sum=0;
    }
    if(dem==0)
    {
        printf("0");
    }
}
