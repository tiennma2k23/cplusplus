#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5+10;
bool vs[MAXN];
vector<long long> gr[MAXN];
deque< long long > q;
long long m,n,u,v,k=1,i,canh,road,lib,ans,dinh,tv,a[MAXN];
long long BFS(long long x)
{
    long long i;
    vs[x]=true;
    q.push_back(x);
    long long min1=a[x];
    while (!q.empty())
    {
        long long u=q.front();
        q.pop_front();
        for (i=0;i<gr[u].size();i++)
        {
            long long v=gr[u][i];
            if (!vs[v])
            {
                vs[v]=true;
                q.push_back(v);
                min1=min(min1,a[v]);
            }
        }
    }
    return min1;
}
int main()
{
    long long i,m,n,u,v,k,ans=0;
    cin>>n>>m;
    for (i=1;i<=n;i++) cin>>a[i],vs[i]=false;
    for (i=1;i<=m;i++)
    {
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    for (k=1;k<=n;k++)
        if (!vs[k]) ans+=BFS(k);
    cout<<ans<<endl;
}
