#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1,inf=1e18;
int dp[maxn],ok[maxn],s[maxn],e[maxn];
vector<int> gr[maxn];
vector<II> _v;
int cnt,a[maxn],ans;
void dfs(int u,int p)
{
    if (dp[u]==0) ok[u]=1;
    for (auto v:gr[u])
    {
        if (v==p) continue;
        ok[v]=ok[u];
        dfs(v,u);
    }
}

void dfs1(int u,int p)
{
    cnt++;
    dp[u]=a[u];
    s[u]=cnt;
    for (auto v:gr[u])
    {
        if (v==p) continue;

        dfs1(v,u);
        dp[u]^=dp[v];
    }
    e[u]=cnt;
}

void solve()
{
    int n,k,cnt=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        gr[i].clear();
        s[i]=0,e[i]=0,ok[i]=false;
    }
    for (int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs1(1,0);
    if (dp[1]==0)
    {
        cout<<"YES"<<endl;return;
    }
    else
    {
        if (k!=2)
        {
            ans=0;
            dfs(1,0);
            _v.clear();
            for (int i=2;i<=n;i++) if (dp[i]==dp[1]) _v.push_back(II(s[i],e[i]));
            sort(_v.begin(),_v.end());
            int tmp=inf;
            for (auto u:_v)
            {
                tmp=min(tmp,u.se);
                if (u.fi>tmp)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
            for (int i=2;i<=n;i++)
            {
                if (ok[i]&&dp[i]==dp[1])
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)solve();
}
