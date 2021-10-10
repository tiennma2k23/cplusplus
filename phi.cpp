#include<bits/stdc++.h>
using namespace std;
long long n,mod,ans,pr[100000],dem=0;
typedef long double d;
void nt()
{
    long long i;
    for (i=2;i<=n;i++)
    {
        bool kt=false;
        if (n%i==0)
        {
            dem++;
            pr[dem]=i;
            kt=true;
            while (n%i==0) n=n/i;
        }
    }
}
int main()
{
    cin>>n;
    d ans=(d) n;
    nt();
    long long i;
    for (i=1;i<=dem;i++)
    {
        ans=ans*(d)(pr[i]-1)/pr[i];
    }
    cout<<(long long )ans<<endl;
}
