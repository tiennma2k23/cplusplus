#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=1e5+1,mod=1e9+7;
ll t[maxn],a[maxn];

ll sqr(ll x)
{
    return (x*x)%mod;
}

ll pow(ll a,ll b)
{
    if (b==0) return 1;
    else
    {
        if (b%2==0) return sqr(pow(a,b/2));
        else return (a*(sqr(pow(a,b/2))))%mod;
    }
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll tmp=t[n-1];
    ll res=pow(tmp,mod-2);
    res=(res*t[n])%mod;
    ll ans=1;
    for (ll i=1;i<=k;i++) ans=(ans*res)%mod;
    cout<<ans<<endl;
}
int main()
{
    t[0]=1;
    for (ll i=1;i<=100000;i++) t[i]=t[i-1]*i,t[i]%=mod;
    ll nt;
    cin>>nt;
    while (nt--)
    {
        solve();
    }
}
