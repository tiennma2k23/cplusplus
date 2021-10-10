
#include <stdio.h>
#define base 1000000007;
int fibo(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    int i,f1=0,f2=1,f;
    for (i=2; i<=n; i++)
    {
        f=(f1+f2)%base;
        f1=f2;
        f2=f;
    }
    return f;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}
