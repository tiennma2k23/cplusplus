#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
using namespace std;
const ll maxn=2e5+1;
vector<ll> gr[maxn],s={0},ans;
ll vt[maxn];

ll DFS(ll u, ll p)
{
    vt[u]=s.size();
    s.push_back(u);
    for (auto v:gr[u])
        if (v!=p)
            {
                ll w=vt[v];
                if (w>0)
                {
                    s.push_back(v);
                    for (ll i=w;i<s.size();i++) ans.push_back(s[i]);
                    return 1;
                }
                if (DFS(v,u)) return 1;
            }
       //s.clear();
       s.pop_back();
       return 0;
}
int main()
{
    //freopen("ABC.inp","r",stdin);
    //freopen("ABC.out","w",stdout);
    ll n,m;
    cin>>n>>m;
    for (ll i=1;i<=m;i++)
    {
        ll u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    for (ll i=1;i<=n;i++)
    {
        if (!vt[i]&&DFS(i,0))
        {
            cout<<ans.size()<<endl;
            for (auto j:ans) cout<<j<<" ";
            return 0;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
