
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+1,mod=666013;
int gt[maxn],rf[maxn];
int sqr(int x)
{
    return x*x;
}

int _pow(int a, int b)
{
    if (b == 0) return 1 % mod;
    else if (b % 2 == 0)
        return sqr(_pow(a, b/2)) % mod;
    else
        return a * (sqr(_pow(a, b/2)) % mod) % mod;
}

int C (int k, int n)
{
    int t1=1,t2=1;
    for (int i=1;i<=k;i++)
    {
        t1=(t1*(n-i+1))%mod;
        t2=t2*i % mod;
    }
    return t1*_pow(t2,mod-2)%mod;
}

int32_t main()
{
    gt[0] = rf[0] = 1 ;
    for (int i = 1 ; i <maxn ; i++)
    {
        gt[i]=gt[i-1];
        if (i!=mod) gt[i] = gt[i - 1] * i % mod ;
    }
    rf[maxn-1] = _pow(gt[maxn-1], mod-2) ;
    for (int i = maxn-2 ; i >= 0 ; i--)
    {
        rf[i]=rf[i+1];
        if (i+1!=mod) rf[i] = rf[i + 1] * (i + 1) % mod ;
    }
    //cout<<C(1,2)<<endl;
    int ans=0;
    int n,k,w;
    cin>>n>>k>>w;
    n-=(k-1)*w;
    ans=C(k,n+k-1);
    cout<<ans<<endl;
}
