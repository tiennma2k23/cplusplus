#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=1e5+1;

int f[maxn],u[maxn],v[maxn],ck[maxn],del[maxn],ans[maxn];

int _find(int x)
{
    return f[x]==x? x:f[x]=_find(f[x]);
}
int32_t main()
{
    int n,m;
    cin>>n>>m;
    for (int i=1; i<=n; i++) f[i]=i;
    for (int i=1; i<=m; i++) cin>>u[i]>>v[i];
    int q;
    cin>>q;
    for (int i=1; i<=q; i++)
    {
        cin>>del[i];
        ck[del[i]]=true;
    }
    int tplt=n;
    for (int i=1; i<=m; i++) if (!ck[i])
        {
            if (_find(u[i])!=_find(v[i]))
            {
                tplt--;
                f[_find(u[i])]=_find(v[i]);
            }
        }
    for (int i=q; i>=1; i--)
    {
        ans[i]=tplt;
        if(_find(u[del[i]])!=_find(v[del[i]]))
        {
            tplt--;
            f[_find(u[del[i]])]=_find(v[del[i]]);
        }
    }
    for (int i=1; i<=q; i++) cout<<ans[i]<<" ";
}
