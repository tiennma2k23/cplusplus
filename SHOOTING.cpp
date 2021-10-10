#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define se second
#define fi first
using namespace std;
const ll maxn=1e5;
II d1[maxn],d2[maxn];
bool ck[maxn];
int main()
{
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll x,u,y,v,z;
        cin>>x>>u>>y>>v>>z;
        d1[i]=II(x,y);
        d2[i]=II(u,v);
    }
    ll m;
    cin>>m;
    while (m--)
    {
        ll a,b;
        cin>>a>>b;
        ll res=0;
        for (ll i=1;i<=n;i++)
        {
            ll mix=min(d1[i].fi,d2[i].fi);
            ll maxx=max(d1[i].fi,d2[i].fi);
            ll miy=min(d1[i].se,d2[i].se);
            ll may=max(d1[i].se,d2[i].se);
            if (mix<=a&&maxx>=a&&miy<=b&&may>=b&&!ck[i])
            {
                res=i;
                ck[i]=true;
                break;
            }
        }
        cout<<res<<endl;
    }
}
