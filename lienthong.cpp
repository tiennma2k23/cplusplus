#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1100;
bool vs[MAXN];
vector<long long> gr[MAXN];
deque< long long > q;
long long m,n,u,v,k=1,i,dem=0;
void BFS(long long x)
{
    long long i;
    vs[x]=true;
    dem++;
    q.push_back(x);
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
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for (i=1;i<=n;i++) vs[i]=false;
    for (i=1;i<=m;i++)
    {
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    for (k=1;k<=n;k++) if (!vs[k]) BFS(k);
    if(dem==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
