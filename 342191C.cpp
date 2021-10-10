
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=1005;
int n,m;
char ch[maxn][maxn],ans[maxn][maxn];
int l[maxn][maxn],r[maxn][maxn],U[maxn][maxn],D[maxn][maxn],vs[maxn][maxn];
int cnt[100];
vector<II> gr[maxn][maxn],v;
void dfs(int u,int _v)
{
    vs[u][_v]=true;
    cnt[ch[u][_v]-'0']++;
    v.push_back({u,_v});
    for (auto [uu,vv]:gr[u][_v])
    {
        if (!vs[uu][vv]) dfs(uu,vv);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    memset(ch,'.',sizeof(ch));
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cin>>ch[i][j];
            if (ch[i][j]=='.') continue;
            if (ch[i][j-1]=='.') l[i][j]=j;
            else l[i][j]=l[i][j-1];
            if (ch[i-1][j]=='.') U[i][j]=i;
            else U[i][j]=U[i-1][j];
        }
    }
    for (int i=n;i>=1;i--)
        for (int j=m;j>=1;j--)
    {
        if (ch[i][j]=='.') continue;
        if (ch[i+1][j]=='.') D[i][j]=i;
        else D[i][j]=D[i+1][j];
        if (ch[i][j+1]=='.') r[i][j]=j;
        else r[i][j]=r[i][j+1];
    }
    //cout<<l[1][3]<<" "<<r[1][3]<<endl;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
    {
        if (ch[i][j]=='.') continue;
        gr[i][j].push_back({i,l[i][j]+r[i][j]-j});
        gr[i][j].push_back({U[i][j]+D[i][j]-i,j});
    }

    memset(ans,'.',sizeof(ans));
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
    {
        if (ch[i][j]=='.') continue;
        if (!vs[i][j])
        {
            for (int k=0;k<10;k++) cnt[k]=0;
            v.clear();
            dfs(i,j);
            int cs=0;
            for (int k=1;k<10;k++) if (cnt[k]>cnt[cs]) cs=k;
            for (auto val:v)
            {
                ans[val.fi][val.se]=char('0'+cs);
                //if (val.fi==1&&val.se==1) cout<<i<<" "<<j<<endl;
            }
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++) cout<<ans[i][j];
        cout<<endl;
    }
}
