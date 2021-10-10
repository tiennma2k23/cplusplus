#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=1e5+1,mod=1e9+7;
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
    if (n < k || k < 0) return 0 ;
    return (gt[n] * rf[k] % mod) * rf[n - k] % mod ;
}
int32_t main()
{
    int k,n;
    cin>>n>>k;
    gt[0]=rf[0]=1;
    for (int i=1;i<=n;i++)
    {
        gt[i]=(gt[i-1]*i)%mod;
        rf[i]=_pow(gt[i],mod-2);
    }
    int ans=1;
    for (int i=1;i<=k;i++)
    {
        int a;
        cin>>a;
        ans=(ans*C(a,n))%mod;
        n-=a;
    }
    cout<<ans<<endl;
}
