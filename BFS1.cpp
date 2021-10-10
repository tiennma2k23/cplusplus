#include<bits/stdc++.h>
using namespace std;
const long long MAXN=110;
bool vs[MAXN];
vector<long long> gr[MAXN];
deque< long long > q;
long long m,n,u,v,k=1,i;
void BFS(long long x)
{
    long long i;
    for (i=1;i<=n;i++) vs[i]=false;
    vs[x]=true;
    q.push_back(x);
    cout<<x<<endl;
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
                cout<<v<<endl;
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for (i=1;i<=m;i++)
    {
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    BFS(k);
}
