
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
vector<ll> gr[maxn];
ll ans[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,q;
    cin>>n>>q;
    for (ll i=1;i<=n;i++)
    {
        ans[i]=i;
        gr[i].push_back(i);
    }
    while (q--)
    {
        ll x,y;
        cin>>x>>y;
        for (auto v:gr[x])
        {
            if (ans[v]!=y) gr[y].push_back(v),ans[v]=y;
        }
        gr[x].clear();
    }
    for (ll i=1;i<=n;i++) cout<<ans[i]<<" ";
}
