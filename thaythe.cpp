#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t;
map<ll,ll> d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,q;
    cin>>n>>q;
    for (ll i=1; i<=n; i++)
    {
        ll a;
        cin>>a;
        d[a]++;
        t+=a;
    }
    while (q--)
    {
        ll x,y;
        cin>>x>>y;
        if (x!=y)
        {
            t=t-d[x]*x+d[x]*y;
            d[y]+=d[x];
            d[x]=0;
        }
        cout<<t<<'\n';
    }
}
