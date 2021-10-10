#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5,MOD=1e9+7;
long long gt[2*MAXN],mod[2*MAXN];
long long bigmod(long long a)
{
    long long p=MOD-2,tich=a,du=1;
    while (p>0)
    {
        if (p%2==1) du=du*tich%MOD;
        tich=tich*tich%MOD;
        p=p/2;
    }
    return du;
}
void gtl()
{
    long long i;
    gt[0]=1;
    for (i=1;i<=2*MAXN;i++)
    {
        gt[i]=(gt[i-1]*i)%MOD;
        mod[i]=bigmod(gt[i]);
    }
}
long long C(long long k,long long n)
{
    return (((gt[n]*mod[k])%MOD)*(mod[n-k]%MOD))%MOD;
}
int main()
{
    gtl();
    long long q,x,y,z;
    cin>>q;
    while (q--)
    {
        cin>>x>>y>>z;
        cout<<(C(x,x+y+z)*C(y,x+z)*C(z,x+y))%MOD<<endl;
    }
}
