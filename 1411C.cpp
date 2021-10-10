#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,ans,par[100001];

ll root (ll x)
{
    return par[x]==x?x:(par[x]=root(par[x]));
}

void _merge(ll x,ll y)
{
    ans=0;
    if (x==y) return;
    x=root(x);
    y=root(y);
    if (x==y)
    {
        ans+=2;
        return;
    }
    ans++;
    par[x]=y;
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        for (ll i=1;i<=n;i++) par[i]=i;
        while (m--)
        {
            ll x,y;
            cin>>x>>y;
            _merge(x,y);
        }
        cout<<ans<<endl;
    }
}
