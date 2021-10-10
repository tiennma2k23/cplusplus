
#include<bits/stdc++.h>
using namespace std;

const int maxn=1e5+1;
int p[maxn],sz[maxn];

int _find(int u)
{
    return u==p[u]?u:p[u]=_find(p[u]);
}

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=1; i<=n; i++) p[i]=i;
    for (int i=1; i<=n; i++) sz[i]=1;
    int mx=1;
    int num=n;
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        u=_find(u);
        v=_find(v);
        if (u!=v)
        {

            if (sz[u]>sz[v])swap(u, v);
            sz[v]+=sz[u];
            p[u]=v;
            num--;
            mx=max(mx,sz[v]);
        }
        cout<<num<<" "<<mx<<endl;
    }
}
