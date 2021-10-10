#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll f[1001][20],a[2000],dem[20],t[20];

ll thu(ll i, bool gh, bool ck)
{
    if (i<0)
    {
        if (ck) return 1;
        return 0;
    }
    if (!gh&&f[i][ck]>=0) return f[i][ck]%mod;
    ll kq=0;
    bool ghm;
    ll maxc=gh?a[i]:9;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh&&(c==maxc);
        kq+=thu(i-1,ghm,ck&(dem[c]++<=t[c]&&t[c]>0))%mod;
        kq%=mod;
    }
    if (!gh) f[i][ck]=kq;
    return kq;
}

ll G(ll x)
{
    for (ll i=0;i<x;i++) a[i]=9;
    return thu(x-1,true,true);
}
int main()
{
    ll n,q;
    cin>>q;
    while (q--)
    {
        cin>>n;
        for (ll i=0;i<=9;i++) cin>>t[i],dem[i]=0;
        memset(f,-1,sizeof(f));

        cout<<G(n)<<endl;
    }
}
