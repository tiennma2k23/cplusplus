#include<bits/stdc++.h>
#define int long long
#define st first
#define nd second
using namespace std;
const int maxn=1e6+2;
const int mod=1e9+7;
const int oo=1e9;
typedef pair<int,int> ii;
int n,k;
int a[maxn],f[maxn];
vector<int>g[maxn];
void dfs(int u)
{
    int leaf=0;
    f[u]=a[u]==0 ? 0 : oo;
    for (int v: g[u])
    {
        if (g[v].empty())
        {
            f[v]=1;
            ++leaf;
            ++k;
        }
        else
        {
            dfs(v);
            if (a[u]==1)
                f[u]=min(f[u],f[v]);
            else
                f[u]+=f[v];
        }
    }
    f[u]+=leaf;
    if (a[u]==1 && leaf>0) f[u]=1;
}
int32_t main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<n; i++)
    {
        int p;
        cin>>p;
        g[p].push_back(i+1);
    }
    dfs(1);
    cout<<k-f[1]+1<<endl;
}
