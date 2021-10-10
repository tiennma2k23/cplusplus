#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5+10;
bool vs[MAXN];
vector<long long> gr[MAXN];
deque< long long > q;
long long m,n,u,v,k=1,i,canh,road,lib,ans,dinh,tv;
void BFS(long long x)
{
    long long i;
    vs[x]=true;
    q.push_back(x);
    canh=0;dinh=1;
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
                canh++;
                dinh++;
            }
        }
    }
}
int main()
{
    freopen("RoadNLib.inp","r",stdin);
    freopen("RoadNLib.out","w",stdout);
    cin>>tv;
    while (tv--){
    ans=0;
    cin>>n>>m>>lib>>road;
    for (i=1;i<=n;i++) vs[i]=false;
    for (i=1;i<=m;i++)
    {
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    for (k=1;k<=n;k++)if (!vs[k])
    {
        BFS(k);
        ans+=min(canh*road+lib,dinh*lib);
    }
    if(m==0) ans=lib*n;
    cout<<ans<<endl;
    memset(gr,0,sizeof(gr));
    }
}
