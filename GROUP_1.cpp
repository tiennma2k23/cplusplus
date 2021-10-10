#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=5000;
ll b[maxn];
int main()
{
    vector<ll> v, gr[65][65];
    ll ans=-1;
    ll n;
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        while (a>0)
        {
            v.push_back(a%2);
            a/=2;
        }
        ll dem=v.size();
        ll maxx=max(maxx,dem);
        for (auto u:v)
        {
            gr[u][dem].push_back(i);
            dem--;
        }
        v.clear();
    }
    for (ll i=1;i<=n;i++) cin>>b[i];
    for (ll i=1;i<=60;i++)
    {
        ll tmp=0,tmp1=0;;
        for (auto u:gr[0][i]) tmp+=b[u];
        for (auto u:gr[1][i]) tmp1+=b[u];
        ans=max({ans,tmp,tmp1});
    }
    cout<<ans<<endl;
}
