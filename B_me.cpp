#include<bits/stdc++.h>
#define int long long
using namespace std;

struct Data
{
    int x,y,res;
};
int dp[101][101];
const int inf=1e9+1;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    for (int i=0;i<=n;i++)
        for (int j=0;j<=m;j++) dp[i][j]=inf;
    dp[1][1]=0;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++) dp[i][j]=min({dp[i][j],dp[i-1][j]+j,dp[i][j-1]+i});
    int res1=dp[n][m];
     for (int i=0;i<=n;i++)
        for (int j=0;j<=m;j++) dp[i][j]=-inf;
    dp[1][1]=0;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++) dp[i][j]=max({dp[i][j],dp[i-1][j]+j,dp[i][j-1]+i});
    int res2=dp[n][m];
    if (res1<=k&&res2>=k) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

int32_t main()
{
    freopen("B.inp","r",stdin);
    freopen("B.out","w",stdout);
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}

