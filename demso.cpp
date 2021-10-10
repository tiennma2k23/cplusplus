#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod=1e9+7;

ll f[20][200][6000],a[20],sum[10];

void ktao()
{
    for (ll i=1;i<=9;i++) sum[i]=sum[i-1]+i*i;
}

ll thu(ll i,bool gh,ll tcs,ll bp,ll so)
{
    if (i<0)
    {
        if ((__gcd(tcs,bp))==1) return so%mod;
        return 0;
    }
    if (!gh&&f[i][tcs][bp]>=0) return f[i][tcs][bp];
    ll kq=0;
    ll maxc=gh?a[i]:9;
    bool ghm;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh&&(c==maxc);
        kq=(kq+thu(i-1,ghm,tcs+c,bp+sum[c],so*10+c))%mod;
    }
    kq%=mod;
    if (!gh) f[i][tcs][bp]=kq;
    return kq;
}

ll G(ll x)
{
    memset(a,0,sizeof(a));
    ll n=0;
    a[n]=0;
    while (x)
    {
        a[n]=x%10;
        x/=10;
        n++;
    }
    return thu(n-1,true,0,0,0);
}

int main()
{
    memset (f,-1,sizeof(f));
    ktao();
    ll q;
    cin>>q;
    while (q--)
    {
        ll l ,r;
        cin>>l>>r;
        ll ans=(G(r)-G(l-1)+mod)%mod;
        cout<<ans<<endl;
    }
}
