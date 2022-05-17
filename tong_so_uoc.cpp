#include <stdio.h>
#include <string.h>
int a[2000006];
void Era()
{
    for (int i = 2; i * i <= 2e6 + 1; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j <= 2e6 + 1; j += i)
            {
                if (a[j] == 0)
                {
                    a[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= 2e6 + 1; i++)
    {
        if (a[i] == 0)
            a[i] = i;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    Era();
    long long s = 0;
    while (n--)
    {
        int b;
        scanf("%d", &b);
        while (b != 1)
        {
            s += a[b];
            b /= a[b];
        }
    }
    printf("%lld", s);
}
