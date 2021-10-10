#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
const int maxn=1e5+1,mod=1e9+7;
vector<int> gr[maxn];
II dfs(int u,int p)
{
    int d=1,w=1;
    for (auto v:gr[u])
    {
        if (v==p) continue;
        II tmp=dfs(v,u);
        d*=tmp.se;
        d%=mod;
        w*=(tmp.se+tmp.fi);
        w%=mod;
    }
    return II(d,w);
}

int32_t main()
{
    int n;
    cin>>n;
    for (int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    II ans=dfs(1,0);
    cout<<(ans.fi+ans.se)%mod<<endl;
}
