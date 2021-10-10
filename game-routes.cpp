#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+1,mod=1e9+7;
vector<int> gr[maxn];
bool vs[maxn];
int f[maxn];
void dfs(int u)
{
    vs[u]=1;
    for(int v:gr[u])
    {
        if(!vs[v]) dfs(v);
        f[u]+=f[v];
        f[u]%=mod;
    }
}
int32_t main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        gr[a].push_back(b);
    }
    f[n]=1;
    dfs(1);
    cout<<f[1]<<endl;
}
