#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5;
vector<ll> gr[maxn],q;
ll vs[maxn],s,t,m,n;
void DFS(ll u)
{
    vs[u]=true;
    bool ck=true;
    q.push_back(u);
    if (u==t) return ;
    for (auto v:gr[u])
    {
        if (!vs[v])
        {
            ck=false;
            DFS(v);
        }
    }
    if (ck) q.pop_back();
}
int main()
{
    cin>>n>>m>>s>>t;
    for (ll i=1;i<=m;i++)
    {
        ll u,v;
        cin>>u>>v;
        gr[u].push_back(v);
    }
    for (ll i=1;i<=n;i++) sort(gr[i].begin(),gr[i].end());
    DFS(s);
    for (ll i=0;i<q.size();i++)
    {
        cout<<q[i]<<" ";
        if (q[i]==t) return 0;
    }
}
