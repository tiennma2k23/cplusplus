#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll f[1001][1001][11],g[1001][1001];
int main()
{
    ll n,m,k,l;
    string s,t;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("SPLIT.inp","r",stdin);
    freopen("SPLIT.out","w",stdout);
    cin>>n>>m>>k;
    cin>>s;
    cin>>t;
    s=' '+s;
    t=' '+t;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
    {
        if (s[i]==t[j]) g[i][j]=g[i-1][j-1]+1;
        else g[i][j]=0;
    }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            for (ll l=1;l<=k;l++)
    {
        f[i][j][l]=max(f[i-1][j][l],f[i][j-1][l]);
        f[i][j][l]=max(f[i][j][l],f[i-g[i][j]][j-g[i][j]][l-1]+g[i][j]);
    }
    if (!f[n][m][k])
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<f[n][m][k]<<endl;
}
