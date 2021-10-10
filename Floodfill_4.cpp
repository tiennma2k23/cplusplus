#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
const ll maxn=1001;
ll n,m;
bool vs[maxn][maxn];
char a[maxn][maxn];
II bt[5]={II(-1,0),II(1,0),II(0,1),II(0,-1)};

void dfs(ll x, ll y,char ch, II p)
{
    vs[x][y]=true;
    for (ll i=0;i<4;i++)
    {
        ll tx=bt[i].fi+x,ty=bt[i].se+y;
        if (a[tx][ty]==ch&&tx>=1&&tx<=m&&ty>=1&&ty<=n)
        {
            if (vs[tx][ty]&&tx!=p.fi&&ty!=p.se)
            {
                cout<<"Yes"<<endl;
                exit(0);
            }
            else if (!vs[tx][ty]) dfs(tx,ty,ch,II(x,y));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>m>>n;
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++) cin>>a[i][j];
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++)
        if (!vs[i][j]) dfs(i,j,a[i][j],II(0,0));
    cout<<"No"<<endl;
}
